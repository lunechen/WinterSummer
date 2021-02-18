#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s, s1;
    vector <string> vs;
    while(cin >> s){
        if (s=="ADD"){
            cin >> s;
            vs.push_back(s);
        }
        else if(s=="INSERT"){
            cin >> s >> s1;
            vs.insert(find(vs.begin(), vs.end(), s1), s);
        }
        else if(s=="REMOVE"){
            cin >> s;
            vs.erase(find(vs.begin(), vs.end(), s));
        }
        else{
            for (auto it:vs) cout << it << ' ';
            cout << '\n';
        }
    }

    return 0;
}