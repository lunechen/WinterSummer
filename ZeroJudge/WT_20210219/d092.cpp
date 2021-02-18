#include <bits/stdc++.h>
using namespace std;

bool cmp(pair <char, long long int> a, pair <char, long long int> b){
    if (a.second==b.second) return a.first>b.first;
    return a.second>b.second;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    long long int T, a, b;
    while(cin >> T){
        if (T==0) break;

        vector <pair <char, long long int> > vp;
        while(T--){
            cin >> a >> b;
            if (a>b) vp.push_back(make_pair('>', a+b));
            else if (a<b) vp.push_back(make_pair('<', a+b));
            else vp.push_back(make_pair('=', a+b));
        }
        sort(vp.begin(), vp.end(), cmp);
        for (auto it:vp) cout << it.first << it.second << ' ';
        cout << '\n';
    }

    return 0;
}