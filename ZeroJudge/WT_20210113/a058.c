#include <stdio.h>
#include <stdlib.h>

int main(){
    int T, n;
    int a=0, b=0, c=0;

    scanf("%d", &T);

    while(T--){
        scanf("%d", &n);
        if (n%3==0) a++;
        else if (n%3==1) b++;
        else c++;
    }

    printf("%d %d %d\n", a, b, c);

    return 0;
}