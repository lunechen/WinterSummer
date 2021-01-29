#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;

    while(scanf("%d", &n)!=EOF){
        if (n<=10)  printf("%d\n", n*6);
        else if (n<=20) printf("%d\n", 60+(n-10)*2);
        else if (n<=40) printf("%d\n", 80+(n-20));
        else printf("100\n");
    }

    return 0;
}