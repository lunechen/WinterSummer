#include <stdio.h>
#include <stdlib.h>

int main(){
    int T;

    scanf("%d\n", &T);

    while(T--){
        int t=1;
        char c;
        while((c=getchar())!=EOF){
            if (c=='\n')    break;
            t*=c-'0';
        }
        printf("%d\n", t);
    }

    return 0;
}