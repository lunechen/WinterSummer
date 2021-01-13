#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m;
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        int g[10];
        int t=0;
        scanf("%d", &m);
        
        for (int j=0; j<m; j++){
            scanf("%d", &g[j]);
        }
        
        for (int i=0; i<m; i++){
            if (g[i]==i) continue;
            for (int j=i; j<m; j++){
                if (g[j]==i){
                    int tmp=g[j];
                    g[j]=g[i];
                    g[i]=tmp;
                    t++;
                }
            }
        }
        printf("%d\n", t);
    }

    return 0;
}