#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int d1, d2, a, b, c, d;

    scanf("%d", &n);

    for (int i=0; i<n; i++){
        scanf("%d %d %d %d", &a, &b, &c, &d);
        printf("%d %d %d %d ", a, b, c, d);
        d1=b-a;
        d2=c-b;
        if (d1==d2) printf("%d\n", d+d1);
        else{
            printf("%d\n", d*(c/b));
        }
    }

    return 0;
}