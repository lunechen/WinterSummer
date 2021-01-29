#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char tmp[10000];
    int T;
    scanf("%d", &T);

    while(T--){
        int cnt=0;

        scanf("%s", tmp);
        int len=strlen(tmp);
        
        for (int i=0; i<len; i++){
            if (tmp[i]=='X') cnt+=2;
            if (tmp[i]=='H') cnt++;
        }

        printf("%d\n", cnt);
    }

    return 0;
}