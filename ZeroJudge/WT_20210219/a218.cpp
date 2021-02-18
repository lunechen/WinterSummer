#include <bits/stdc++.h>
using namespace std;

bool cmp(pair <int, int> a, pair <int, int> b){
    if (a.second==b.second) return a.first<b.first;
    return a.second>b.second;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T, a;

    while(cin >> T){
        int tmp[10]={0};
        vector < pair <int, int> > vp;
        while(T--){
            cin >> a;
            tmp[a]++;
        }

        for (int i=0; i<10; i++) if(tmp[i]) vp.push_back(make_pair(i, tmp[i]));
        
        sort(vp.begin(), vp.end(), cmp);
        for (auto it:vp) cout << it.first << ' ';
        cout << '\n'; 
    }

    return 0;
}