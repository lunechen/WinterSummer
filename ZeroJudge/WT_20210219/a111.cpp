#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int a;
    while(cin >> a){
        if (a==0) break;
        cout << a*(a+1)*(2*a+1)/6 << '\n';
    }

    return 0;
}