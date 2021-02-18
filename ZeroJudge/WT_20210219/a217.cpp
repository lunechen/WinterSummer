#include <bits/stdc++.h>
using namespace std;

int main(){
    char a, b, c;
    int flag=1;
    a=' ';
    b=getchar();
    b=toupper(b);

    while((c=getchar())!=EOF){
        if (flag==0 && isalpha(c)){
            flag=1;
            c=toupper(c);
        }
        if (!isalpha(a) && b=='i' && !isalpha(c)) b='I';
        if (c=='.' || c=='?' || c=='!' || c=='\n') flag=0;
        cout << b;
        a=b;
        b=c;
    }
    cout << b;

    return 0;
}