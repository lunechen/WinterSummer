#include <bits/stdc++.h>
using namespace std;

int main(){
    stack <int> a;
    int T, b, c;
    scanf("%d", &T);

    while(T--){
        scanf("%d", &b);
        if (b==1) a.pop();
        if (b==2) printf("%d\n", a.top());
        if (b==3) {
            scanf("%d", &c);
            a.push(c);
        }
    }

    return 0;
}