#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char s[1000];
    int len;

    scanf("%s", s);

    len=strlen(s);
    int flag=0;

    for (int i=len-1; i>=0; i--){
        if (s[i]=='0' && flag==0) continue;
        else {
            printf("%c", s[i]);
            flag=1;
        }
    }
    printf("\n");
    
    if (!flag) printf("0\n");

    return 0;
}