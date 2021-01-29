#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double a, b, c;
    double ans;

    scanf("%lf %lf %lf", &a, &b, &c);

    ans=b*b-4*a*c;
    if (ans<0) printf("No real root\n");
    else if (ans==0){ 
        ans=-b/(2*a);
        if (ans==-0) ans=-ans;
        printf("Two same roots x=%.f\n", ans);
    }
    else{
        printf("Two different roots x1=%.f , x2=%.f\n", (-b+sqrt(ans))/(2*a), (-b-sqrt(ans))/(2*a));
    }

    return 0;
}