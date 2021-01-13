#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, j;
    int p, ini, c;

    scanf("%d", &n);

    for (i=0; i<n; i++){
        int l[100]={0};
        scanf("%d %d", &p, &ini);
        for (j=1; j<=p; j++){
            l[j]=1;
        }
        c=p;
        while(c!=1){
            while(l[ini]!=1){
                ini++;
                if (ini>p) ini=1;
            }
            ini++;
            while(l[ini]!=1){
                ini++;
                if (ini>p) ini=1;
            }
            l[ini]=0;
            c--;
            }
            while(l[ini]!=1){
                ini++;
                if (ini>p) ini=1;
            }

        printf("%d\n", ini);
    }

    return 0;
}