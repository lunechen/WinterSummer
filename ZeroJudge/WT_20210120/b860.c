#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c=0;
    scanf("%d %d", &a, &b);

    while(b!=0){
        if (a>=12){
            a-=10;
            b--;
            c++;
        }
        else {
            b--;
            a++;
        }
    }

    printf("%d\n", c);

    return 0;
}