#include <stdio.h>
#include <stdlib.h>

void ans(int a, int b){
    b+=30;
    a+=2;
    if (b>=60){
        a+=1;
        b-=60;
    }
    if (a>=24){
        a-=24;
    }

    if (a<10) printf("0%d:", a);
    else printf("%d:", a);
    if (b<10) printf("0%d\n", b);
    else printf("%d\n", b);
}

int main(){
    int a, b;

    scanf("%d %d", &a, &b);
    
    ans(a, b);

    return 0;
}