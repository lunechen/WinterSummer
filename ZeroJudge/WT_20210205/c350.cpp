#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, w, t;

    cin >> n >> k >> w;
    t=n;
    
    while(n>=k){
        n-=k;
        n+=w;
        t+=w;
    }

    cout << t << '\n';
    
    return 0;
}