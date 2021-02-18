#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T, a;

    while(cin >> T){
        vector <int> v;
        
        while(T--){
            cin >> a;
            v.push_back(a);
        }

        sort(v.begin(), v.end());
        for (auto it:v) cout << it << ' ';
        cout << '\n';
    }

    return 0;
}