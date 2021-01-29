#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

int main(){
    int n, cnt=0;
    int a[10000];

    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<n-1-i; j++){
            if (a[j]>a[j+1]){
                swap(&a[j], &a[j+1]);
                cnt++;
            }
        }
    }

    printf("%d\n", cnt);

    return 0;
}