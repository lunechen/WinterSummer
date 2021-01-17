#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char c, a;

    while((a=getchar())!=EOF){
        if (a=='\n') continue;
        for (int i=0; i<6; i++){
            c=getchar();
            printf("%d", abs(c-a));
            a=c;
        }
        printf("\n");
    }

    return 0;
}