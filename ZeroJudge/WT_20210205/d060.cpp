#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    cout << abs((n-25>0)*60 - abs(n-25)) << '\n';

    return 0;
}