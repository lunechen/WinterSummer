#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char c[100000];
    int T, cnt=0, k=0, d=0, a=0;

    scanf("%d", &T);

    while(T--){
        scanf("%s", &c);
        if (strcmp(c, "Get_Assist")==0) a++;
        if (strcmp(c, "Die")==0){
            if (cnt<3) printf("You have been slained.\n");
            else printf("SHUTDOWN.\n");
            d++;
            cnt=0;
        }
        if (strcmp(c, "Get_Kill")==0){
            cnt++;
            k++;
            if (cnt<3) printf("You have slain an enemie.\n");
            else if (cnt==3) printf("KILLING SPREE!\n");
            else if (cnt==4) printf("RAMPAGE~\n");
            else if (cnt==5) printf("UNSTOPPABLE!\n");
            else if (cnt==6) printf("DOMINATING!\n");
            else if (cnt==7) printf("GUALIKE!\n");
            else printf("LEGENDARY!\n");
        }
    }

    printf("%d/%d/%d", k, d, a);

    return 0;
}