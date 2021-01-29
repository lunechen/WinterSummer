#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char c, a=' ';
    int n=0;

    while((c=getchar())!=EOF){
        if (c=='\n'){
            printf("%d\n", n);
            n=0;
        }
        else if(!isalpha(a) && isalpha(c)){
            n++;
        }
        a=c;
    }

    if (n!=0)   printf("%d\n", n);

    return 0;
}