#include <bits/stdc++.h>
using namespace std;

int main(){
    queue <char> a;
    char c;
    int n=0;

    while(scanf("%c", &c)!=EOF){
        if (c!='\n'){
            a.push(c);
            n++;
        }
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf("%c", a.front());
            c=a.front();
            a.pop();
            a.push(c);
        }
        printf("\n");
        c=a.front();
        a.pop();
        a.push(c);
    }

    return 0;
}