#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    return *(int *)a-*(int *)b;
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