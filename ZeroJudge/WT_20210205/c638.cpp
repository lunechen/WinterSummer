#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    int a=n%10;
    if (a==4) cout << "甲";
    else if (a==5) cout << "乙";
    else if (a==6) cout << "丙";
    else if (a==7) cout << "丁";
    else if (a==8) cout << "戊";
    else if (a==9) cout << "己";
    else if (a==0) cout << "庚";
    else if (a==1) cout << "辛";
    else if (a==2) cout << "壬"; 
    else cout << "癸";

    int b=n%12;
    if (b==10) cout << "午";
    else if (b==11) cout << "未";
    else if (b==0) cout << "申";
    else if (b==1) cout << "酉";
    else if (b==2) cout << "戌";
    else if (b==3) cout << "亥";
    else if (b==4) cout << "子";
    else if (b==5) cout << "丑";
    else if (b==6) cout << "寅";
    else if (b==7) cout << "卯";
    else if (b==8) cout << "辰";
    else  cout << "巳";
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;

    while(cin >> n){
        solve(n);
    }

    return 0;
}