#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    long long int a, ans=1;
    cin >> a;
    
    cout << "2^0 = 1\n";
    for (long long int i=1; i<=a; i++){
        ans*=2;
        cout << "2^" << i << " = " << ans << '\n';
    }

    return 0;
}