#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;

    while(scanf("%d", &n)!=EOF && n!=0){
        for (int i=1; i<n; i++){
            if (i%7!=0) printf("%d ", i);
        }
        printf("\n");
    }
    
    return 0;
}