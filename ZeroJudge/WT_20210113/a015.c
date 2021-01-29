#include <stdio.h>
#include <stdlib.h>

int main(){
    int r, c;
    int m[100][100];

    while(scanf("%d", &r)!=EOF){

        scanf("%d", &c);

        for (int i=0; i<r; i++){
            for (int j=0; j<c; j++){
                scanf("%d", &m[i][j]);
            }
        }

        for (int i=0; i<c; i++){
            for (int j=0; j<r; j++){
                printf("%d ", m[j][i]);
            }
            printf("\n");
        }
    }

    return 0;
}