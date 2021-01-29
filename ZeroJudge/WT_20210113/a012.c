#include <stdio.h>
#include <stdlib.h>

int main(){
    long long int a, b;
    
    while(scanf("%lld", &a)!=EOF){
        scanf("%lld", &b);
        if (b-a<0) printf("%lld\n", a-b);
        else printf("%lld\n", b-a);
    }

    return 0;
}