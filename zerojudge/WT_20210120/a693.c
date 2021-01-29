#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum[1000000];

int main(){
    int n, m, tmp;

    while(scanf("%d", &n)!=EOF){
        scanf("%d", &m);
        memset(sum, 0, n);
        
        for (int i=1; i<=n; i++){
            scanf("%d", &tmp);
            sum[i]=sum[i-1]+tmp;
        }

        for (int i=0; i<m; i++){
            int a, b;
            scanf("%d %d", &a, &b);
            printf("%d\n", sum[b]-sum[a-1]);
        }
    }


    return 0;
}