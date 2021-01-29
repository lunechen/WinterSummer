#include <stdio.h>
#include <stdlib.h>

long long int fn[50000];
long long int gn[50000];

long long int f(long long int n){
    if (n==1) return 1;
    if (fn[n]!=0) return fn[n];
    
    fn[n]=n+f(n-1);
    return fn[n]; 
}

long long int g(long long int n){
    if (n==1) return 1;
    if (gn[n]!=0) return gn[n];
    
    gn[n]=f(n)+g(n-1);
    return gn[n]; 
}

int main(){
    long long int n;

    while(scanf("%lld", &n)!=EOF){
        printf("%lld %lld\n", f(n), g(n));
    }

    return 0;
}