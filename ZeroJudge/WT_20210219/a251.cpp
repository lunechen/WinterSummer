#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector <int> v){
    priority_queue < int, vector <int>, greater <int> > pq;

    for (int i=4; i<n; i++) v.push_back(v[i-4]+v[i-1]);
    for (auto it:v) pq.push(it);
    for (int i=0; i<n/2; i++) pq.pop();
    return pq.top();
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T, a, n;
    
    while(cin >> T){
        while(T--){
            vector <int> v;
            cin >> n;
            
            for (int i=0; i<4; i++){
                cin >> a;
                v.push_back(a);
            }

            cout << solve(n, v) << '\n';
        }
    }

    return 0;
}