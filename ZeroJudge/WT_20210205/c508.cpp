#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    vector <int> a;
    int n, T, tmp;
    cin >> T;

    while(T--){
        cin >> n;
        a.push_back(n);
    }
    sort(a.begin(), a.end());
    
    for (auto x:a) cout << x << ' ';
    cout << '\n';
    
    cout << a[a.size()-1] << ' ';
    tmp=a[a.size()-1];
    for (int i=a.size()-2; i>=0; i--){
        if (tmp!=a[i]) cout << a[i] << ' ';
        tmp=a[i];
    }
    return 0;
}