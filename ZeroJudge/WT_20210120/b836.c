#include <stdio.h>
#include <stdlib.h>

int main(){
    long long int a, b;

    while(scanf("%lld", &a)!=EOF){
    scanf("%lld", &b);

    if (b==0) printf("Go Kevin!!\n");
    else if (a%b==1) printf("Go Kevin!!\n");
    else printf("No Stop!!\n");
    }

    return 0;
}