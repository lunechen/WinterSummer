#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;

    while(scanf("%d", &n)!=EOF){
        printf("%d\n", 1+n+n*(n+1)*(n-1)/6);
    }

    return 0;
}