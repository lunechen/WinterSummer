#include <stdio.h>
#include <stdlib.h>

int main(){
    double n;

    while(scanf("%lf", &n)!=EOF){
        double t=0, a;
        for(double i=0.0; i<n; i++){
            scanf("%lf", &a);
            t+=a;
        }

        if (t/n>59.0) printf("no\n");
        else printf("yes\n");
    }

    return 0;
}