#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;

    while(scanf("%d", &a)!=EOF){
        scanf("%d", &b);
        
        if (a==0) printf("Ok!\n");
        else if (b==0) printf("Impossib1e!\n");
        else if (a%b==0) printf("Ok!\n");
        else printf("Impossib1e!\n");
    }

    return 0;
}