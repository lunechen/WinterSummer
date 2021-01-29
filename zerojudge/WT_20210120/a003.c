#include <stdio.h>
#include <stdlib.h>

int main(){
    int m, d, s;

    scanf("%d %d", &m, &d);
    s=(m*2+d)%3;

    if (s==0) printf("普通\n");
    else if (s==1) printf("吉\n");
    else printf("大吉\n");
    
    return 0;
}