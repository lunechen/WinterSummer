#include <bits/stdc++.h>
using namespace std;

string judge2(string a, string b, int n){
    if (n<0) return a;
    if (a[n] > b[n]) return a;
    else if (a[n] < b[n]) return b;
    return judge2(a, b, n-1);
}

string judge(string a, string b){
    if (a.size() > b.size()) return a;
    else if (a.size() < b.size()) return b;
    return judge2(a, b, a.size()-1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    string a, maxa;
    cin >> T;

    while(T--){
        cin >> a;
        maxa=judge(maxa, a);
    }

    for (int i=maxa.size()-1; i>=0; i--) cout << maxa[i];
    cout << '\n';

    return 0;
}