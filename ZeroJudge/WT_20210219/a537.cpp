#include <bits/stdc++.h>
using namespace std;

set <int> prime;
void ml(){
    prime.insert(2);
    
    for (int i=3; i<3000; i+=2){
        int flag=1;
        
        for (auto it:prime){
            if (i%it==0){
                flag=0;
                break;
            }
        }

        if (flag) prime.insert(i);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ml();
    int T;
    cin >> T;

    for (int i=1; i<=T; i++){
        int flag=1;
        string s;
        map <char, int> mp;

        cin >> s;
        for (int j=0; j<s.length(); j++){
            mp[s[j]]++;
        }

        cout << "Case " << i << ": ";
        for (auto it:mp)
            if (prime.find(it.second)!=prime.end()){
                cout << it.first;
                flag=0;
            }
        if (flag) cout << "empty";
        cout << '\n';
    }

    return 0;
}