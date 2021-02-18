#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int a, b, c;
    while(cin >> a){
        if (a==-1) break;
        cin >> b;
        
        c=abs(a-b);
        if (c>=50) cout << 100-c << '\n';
        else cout << c << '\n';
    }

    return 0;
}