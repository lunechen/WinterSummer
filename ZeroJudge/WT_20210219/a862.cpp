#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, b;
    while(scanf("%lf", &a)!=EOF){
        scanf("%lf", &b);
        printf("%.4f\n", floor(a*1000/b*10000+0.5)/10000);
    }

    return 0;
}