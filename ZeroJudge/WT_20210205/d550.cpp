#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    vector <vector <int> > num;
    int n, m, t;

    cin >> n >> m;
    for (int i=0; i<n; i++){
        vector <int> tmp;
        for (int j=0; j<m; j++){
            cin >> t;
            tmp.push_back(t);
        }
        num.push_back(tmp);
    }

    sort(num.begin(), num.end());

    for (auto x:num){
        for (auto it :x) cout <<it << ' ';
        cout << '\n';
    }

    return 0;
}