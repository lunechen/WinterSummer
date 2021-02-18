#include <bits/stdc++.h>
using namespace std;

void solve(int a){
    if (a%400==0 || (a%100 && a%4==0)) cout << "a leap year\n";
    else cout << "a normal year\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int a;

    while(cin >> a) solve(a);

    return 0;
}