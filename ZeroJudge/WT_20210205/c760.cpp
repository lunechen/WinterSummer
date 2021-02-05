#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string s;

    while(cin >> s){
        s[0]=s[0]-'a'+'A';
        cout << s << '\n';
    }

    return 0;
}