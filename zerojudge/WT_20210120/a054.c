#include <stdio.h>
#include <stdlib.h>

void check(int t){
    if (t==0) printf("BNZ\n");
    else if (t==9) printf("AMW\n");
    else if (t==8) printf("KLY\n");
    else if (t==7) printf("JVX\n");
    else if (t==6) printf("HU\n");
    else if (t==5) printf("GT\n");
    else if (t==4) printf("FS\n");
    else if (t==3) printf("ER\n");
    else if (t==2) printf("DOQ\n");
    else printf("CIP\n");
}

int main(){
    int t=0, tmp;
    
    for (int i=8; i>=1; i--){
        scanf("%1d", &tmp);
        t+=tmp*i;
    }
    scanf("%1d", &tmp);
    t+=tmp;

    check(t%10);

    return 0;
}