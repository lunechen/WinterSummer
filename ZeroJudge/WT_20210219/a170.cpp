#include <bits/stdc++.h>
using namespace std;

int main(){
    long int a, b, T;
    scanf("%ld", &T);

    while(T--){
        scanf("%o %o", &a, &b);
        printf("%X\n", a+b);
    }

    return 0;
}