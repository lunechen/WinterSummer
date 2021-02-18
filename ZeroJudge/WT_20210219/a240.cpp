#include <bits/stdc++.h>
using namespace std;

int p[]={7, 0, 5, 8, 8, 2, 3, 5, 2, 9, 4, 1, 1, 7, 6, 4};
int ans[200000];

int solve(int n){
    if (n==0) return 0;
    else if (ans[n-1]) ans[n]=ans[n-1]+p[n%16];
    else ans[n]=solve(n-1)+p[n%16];
    return ans[n];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T, n;

    while(cin >> T){
        while(T--){
            cin >> n;
            cout << p[n%16] << ' ' << solve(n) << '\n';
        }
    }

    return 0;
}