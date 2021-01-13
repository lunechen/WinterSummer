#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, t, c;
    double a;

    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%lf,%d", &a, &t);
        for (int j=1; j<t+1; j++){
            a=a+j*2.71828;
        }
        c=a*10000;

        printf("%.4lf\n", (double) c/10000);
    }

    return 0;
}