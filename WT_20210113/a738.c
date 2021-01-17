#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b){
    if (b==0) return a;
    else gcd(b, a%b);
}

int main(){
    int a, b;

    while(scanf("%d", &a)!=EOF){
        scanf("%d", &b);
        
        printf("%d\n", gcd(a, b));
    }

    return 0;
}