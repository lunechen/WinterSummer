#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;

    while(scanf("%d", &a)!=EOF){
        string s;
        while(a!=0){
            if (a%2==0){
                s+='0';
            }
            else s+='1';
            a/=2;
        }
        int len=s.size();
        for (int i=len-1; i>=0; i--){
            printf("%c", s[i]);
        }
        printf("\n");
    }

    return 0;
}