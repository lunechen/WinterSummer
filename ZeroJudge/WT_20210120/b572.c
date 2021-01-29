#include <stdio.h>
#include <stdlib.h>

int main(){
    int T, a[5], t;
    
    scanf("%d", &T);

    while(T--){
        for (int i=0; i<5; i++){
            scanf("%d", &a[i]);
        }
        t=(a[2]-a[0])*60+a[3]-a[1];

        if (t<a[4]) printf("No\n");
        else printf("Yes\n");
    }

    return 0;
}