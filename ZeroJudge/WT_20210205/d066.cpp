#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int h, m;
    cin >> h >> m;
    if (h>=8 && h<=16) cout << "At School" << '\n';
    else if (h==7 && m>=30) cout << "At School" << '\n';
    else cout << "Off School" << '\n';

    return 0;
}