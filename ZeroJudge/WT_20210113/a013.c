#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int to_num(char s[]){
    int t=0, len;

    len=strlen(s);
    for (int i=0; i<len; i++){
        if (s[i]=='I') t+=1;
        else if (s[i]=='V') t+=5;
        else if (s[i]=='X') t+=10;
        else if (s[i]=='L') t+=50;
        else if (s[i]=='C') t+=100;
        else if (s[i]=='D') t+=500;
        else if (s[i]=='M') t+=1000;
    }
    
    if (strstr(s, "IV")) t-=2;
    if (strstr(s, "IX")) t-=2;
    if (strstr(s, "XL")) t-=20;
    if (strstr(s, "XC")) t-=20;
    if (strstr(s, "CD")) t-=200;
    if (strstr(s, "CM")) t-=200;
    
    return t;
}

void to_rome(int d){
    int t;
    if (d==0) printf("ZERO");

    t=d/1000;
    for (int i=0; i<t; i++) printf("M");
    d=d%1000;

    t=d/100;
    if (t<=3){
        for (int i=0; i<t; i++) printf("C");
    }
    else if (t==4) printf("CD");
    else if (t>=5 && t<=8){
        printf("D");
        for (int i=5; i<t; i++) printf("C");
    }
    else if (t==9) printf("CM");
    d=d%100;

    t=d/10;
    if (t<=3){
        for (int i=0; i<t; i++) printf("X");
    }
    else if (t==4) printf("XL");
    else if (t>=5 && t<=8){
        printf("L");
        for (int i=5; i<t; i++) printf("X");
    }
    else if (t==9) printf("XC");
    d=d%10;

    t=d;
    if (t<=3){
        for (int i=0; i<t; i++) printf("I");
    }
    else if (t==4) printf("IV");
    else if (t>=5 && t<=8){
        printf("V");
        for (int i=5; i<t; i++) printf("I");
    }
    else if (t==9) printf("IX");

    printf("\n");
}

int main(){
    char s[10000];
    int len, a, b, d;

    while(scanf("%s", s)!=EOF && strcmp(s, "#")!=0){
        a=to_num(s);
        scanf("%s", s);
        b=to_num(s);
        d=abs(a-b);
        to_rome(d);
    }
    return 0;
}