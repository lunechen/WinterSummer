#include <bits/stdc++.h>
using namespace std;

void solve(string a){
    int t=0;

    for (int i=0; i<a.size(); i++){
        if (a[i]=='6' || a[i]=='9' || a[i]=='0') t++;
        else if (a[i]=='8') t+=2;
    }

    cout << t << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string a;

    while(cin >> a){
        solve(a);
    }

    return 0;
}