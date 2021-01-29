#include <stdio.h>
#include <stdlib.h>

int main(){
    long long int a, b;

    while(scanf("%lld", &a)!=EOF){
        scanf("%lld", &b);

        long long int t=0, cnt=0;
        while(t<=b){
            t+=a;
            a++;
            cnt++;
        }

        if (cnt==0) cnt=1;
        printf("%lld\n", cnt);
    }

    return 0;
}