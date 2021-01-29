#include <stdio.h>
#include <stdlib.h>

int cmp(const void *n, const void *m){
    int *a=(int *)n;
    int *b=(int *)m;
    if (*a%10<*b%10) return -1;
    else if (*a%10==*b%10) return *b-*a;
    else return 1;
}

int main(){
    int n;
    int num[10000];

    while(scanf("%d", &n)!=EOF){
        for (int i=0; i<n; i++){
            scanf("%d", &num[i]);
        }

        qsort(num, n, sizeof(int), cmp);
        for (int i=0; i<n; i++){
            printf("%d ", num[i]);
        }
        printf("\n");
    }

    return 0;
}