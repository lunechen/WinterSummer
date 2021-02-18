#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string s;
    char c, a;
    int n;

    while(cin >> s){
        a=s[0];
        n=1;
        for (int i=1; i<=s.length(); i++){
            c=s[i];
            if (c==a) n++;
            else{
                if (n==2) cout << a;
                else if (n!=1) cout << n;
                cout << a;
                n=1;
            }
            a=c;
        }
        cout << '\n';
    }

    return 0;
}