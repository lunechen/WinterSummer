#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    string s;
    cin >> T;

    while(T--){
        cin >> s;
        if (s.length()==5) cout << "3\n";
        else{
            int check=0;
            string a="two";
            for (int i=0; i<3; i++) if (s[i]==a[i]) check++;
            if (check==2 || check==3) cout << "2\n";
            else cout << "1\n";
        }
    }

    return 0;
}