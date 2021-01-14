#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int gcd(int a, int b){
    if (b==0) return a;
    return gcd(b, a%b);
}

int main(){
    int n, m;
    char s[100], t[100];
    char tmp[10000], tmp2[10000];

    scanf("%d", &n);

    for (int i=0; i<n; i++){
        scanf("%s %s", s, t);
        int len=strlen(s);
        int len2=strlen(t);
        if (s[0]!=t[0] || s[len-1]!=t[len2-1]){
            printf("-1\n");
            continue;
        }
        strcpy(tmp, s);
        strcpy(tmp2, t);
        
        m=len*len2/gcd(len, len2);
        for (int j=1; j<(m/len); j++)
            strcat(tmp, s);
        for (int j=1; j<(m/len2); j++)
            strcat(tmp2, t);
        if (strcmp(tmp, tmp2)==0) printf("%s\n", tmp);
        else printf("-1\n");
    }

    return 0;
}