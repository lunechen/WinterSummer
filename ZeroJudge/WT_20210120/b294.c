#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int t, ans=0;

    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        scanf("%d", &t);
        ans+=t*i;
    }

    printf("%d\n", ans);

    return 0;
}