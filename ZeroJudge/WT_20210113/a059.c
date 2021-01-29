#include <stdio.h>
#include <stdlib.h>

int main(){
    int T, a, b;

    scanf("%d", &T);

    for (int i=1; i<=T; i++){
        int t=0;
        scanf("%d %d", &a, &b);
        for (int j=1; j*j<=b; j++){
            if (j*j>=a) t+=j*j; 
        }
        printf("Case %d: %d\n", i, t);
    }

    return 0;
}