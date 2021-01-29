#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m;

    while(scanf("%d", &n)!=EOF){
        scanf("%d", &m);

        if (n==m) printf("%d\n", m);
        else printf("%d\n", m+1);
    }

    return 0;
}