#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, maxa;
    cin >> maxa;

    while(cin >> n){
        if (n>maxa) maxa=n;
    }

    cout << maxa << '\n';

    return 0;
}