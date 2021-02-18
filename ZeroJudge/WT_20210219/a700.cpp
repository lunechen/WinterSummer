#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int a, b;

    while(cin >> a){
        cin >> b;
        unsigned long long int num=1;
        num=num<<(a-1)*8+(b-1);
        cout << num << '\n';
    }

    return 0;
}