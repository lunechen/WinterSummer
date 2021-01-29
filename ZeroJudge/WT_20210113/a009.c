#include <stdio.h>
#include <stdlib.h>

int main(){
    char c;

    while((c=getchar())!=EOF){
        printf("%c", c-7);
    }

    return 0;
}