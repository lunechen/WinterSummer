#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;

    while(T--){
        string s, tmp;
        int a=0;

        for (int i=0; i<4; i++){
            cin >> tmp;
            s+=tmp;
        }

        for (int i=0; i<16; i++){
            if (i%2) a=a+(s[i]-'0');
            else a=a+(2*(s[i]-'0')%10)+(2*(s[i]-'0')/10);
        }

        if (a%10) cout << "Invalid\n";
        else cout << "Valid\n";
    }

    return 0;
}