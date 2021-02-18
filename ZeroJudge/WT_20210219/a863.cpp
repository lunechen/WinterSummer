#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int a;

    while(cin >> a){
        string s(to_string(a));
        int tmp;

        do{
            tmp=0;
            for (int i=0; i<s.length(); i++){
                tmp=tmp+(s[i]-'0')*(s[i]-'0');
            }

            if (s==to_string(tmp)) break;

            s=to_string(tmp);
        } while(s.length()!=1);

        if (tmp==1) cout << a << " is a happy number\n";
        else cout << a << " is an unhappy number\n";
    }

    return 0;
}