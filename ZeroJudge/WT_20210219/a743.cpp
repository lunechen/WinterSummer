#include <bits/stdc++.h>
using namespace std;

int main(){    
    int T, a;
    string s;
    map <string, int> mp;
    cin >> T;
    cin.ignore();

    while(T--){
        getline(cin, s);
        stringstream ss(s);
        ss >> s;

        mp[s]++;
    }

    for (auto it:mp) cout << it.first << ' ' << it.second << '\n';

    return 0;
}