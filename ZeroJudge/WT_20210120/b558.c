#include <stdio.h>
#include <stdlib.h>

int f(int n){
    if (n==1) return 1;
    return f(n-1)+n-1;
}

int main(){
    int n;

    while(scanf("%d", &n)!=EOF){
        printf("%d\n", f(n));
    }

    return 0;
}