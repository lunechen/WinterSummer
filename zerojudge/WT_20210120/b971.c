#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, n, d;
    scanf("%d %d %d", &a, &n, &d);

    if (a==n) printf("%d ", a);
    else {
        for(a; a!=n; a+=d) printf("%d ", a);
        printf("%d", n);
    }

    return 0;
}