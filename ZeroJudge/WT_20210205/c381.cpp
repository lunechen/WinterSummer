#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string s, tmp, ans;
    int N, K, n;

    while(cin >> N >> K){
        if (N==0) break;

        s.clear();
        ans.clear();

        while(N--){
            cin >> tmp;
            s+=tmp;
        }
        while(K--){
            cin >> n;
            ans+=s[n-1];
        }

        cout << ans <<'\n';
    }

    return 0;
}