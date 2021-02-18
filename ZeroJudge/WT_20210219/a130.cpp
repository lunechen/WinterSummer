#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;

    for (int i=1; i<=T; i++){
        map <int, vector <string> > mpv;
        string tmp;
        int a;

        for (int j=0; j<10; j++){
            cin >> tmp >> a;
            mpv[a].push_back(tmp);
        }
        auto it=mpv.end();
        it--;
        cout << "Case #" << i << ':' << '\n';
        for(auto x:it->second) cout << x << '\n';
    }

    return 0;
}