#include <stdio.h>
#include <stdlib.h>

int main(){
    long long int a, b ,c, T;

    scanf("%lld", &T);

    while(T--){
        scanf("%lld %lld %lld", &a, &b, &c);
        if (a==1)   printf("%lld\n", b+c);
        else if (a==2)   printf("%lld\n", b-c);
        else if (a==3)   printf("%lld\n", b*c);
        else   printf("%lld\n", b/c);
    }

    return 0;
}