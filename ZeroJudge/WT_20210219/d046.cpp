#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T, a, ans=0;
    cin >> T;

    while(T--){
        cin >> a;
        if (a<=10) ans++;
    }
    cout << ans;

    return 0;
}