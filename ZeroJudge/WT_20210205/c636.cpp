#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    if (n==1) cout << "鼠" << '\n';
    else if (n==2) cout << "牛" << '\n';
    else if (n==3) cout << "虎" << '\n';
    else if (n==4) cout << "兔" << '\n';
    else if (n==5) cout << "龍" << '\n';
    else if (n==6) cout << "蛇" << '\n';
    else if (n==7) cout << "馬" << '\n';
    else if (n==8) cout << "羊" << '\n';
    else if (n==9) cout << "猴" << '\n';
    else if (n==10) cout << "雞" << '\n';
    else if (n==11) cout << "狗" << '\n';
    else cout << "豬" << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    
    while(cin >> n){
        if (n>0) solve(n%12);
        else solve (12-(abs(n+1)%12));
    }

    return 0;
}