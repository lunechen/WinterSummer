#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, i=2, n=0;

    scanf("%d", &a);

    while(1){
        if (a%i==0){
            a/=i;
            n++;
            continue;
        }
        else if (n>0){
            printf("%d", i);
            if (n>1) printf("^%d", n);
            if (a>1) printf(" * ");
            if (a==1) break;
            n=0;
        }
        i++;
    }

    return 0;
}