#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char s[10000];
    int len;

    while(scanf("%s", s)!=EOF){
        len=strlen(s);

        int flag=1;

        for (int i=0; i<len/2; i++){
            if (s[i]!=s[len-i-1]){
                flag=0;
                break;
            }
        }
        if (flag) printf("yes\n");
        else printf("no\n");
    }

    return 0;
}