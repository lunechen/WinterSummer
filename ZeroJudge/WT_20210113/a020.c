#include <stdio.h>
#include <stdlib.h>

int change(char c){
    int t;
    if (c>='A' && c<='H'){
        t=1+9*(c-'A');
    }
    else if (c=='J' || c=='K'){
        t=1+9*(c-'J'+8);
    }
    else if (c>='L' && c<='N'){
        t=2+9*(c-'L');
    }
    else if (c>='P' && c<='V'){
        t=2+9*(c-'P'+3);
    }
    else if (c>='X' && c<='Y'){
        t=3+9*(c-'X');
    }
    else if (c=='W'){
        t=3+9*2;
    }
    else if (c=='Z'){
        t=3+9*3;
    }
    else if (c=='I'){
        t=3+9*4;
    }
    else if (c=='O'){
        t=3+9*5;
    }

    return t;
}

int main(){
    char c;
    int n, t;

    scanf("%c", &c);
    t=change(c);

    for(int i=8; i>=1; i--){
        scanf("%1d", &n);
        t+=n*i;
    }
    scanf("%1d", &n);
    t+=n;

    if (t%10==0) printf("real\n");
    else    printf("fake\n");

    return 0;
}