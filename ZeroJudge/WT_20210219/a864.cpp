#include <bits/stdc++.h>
using namespace std;

char level(double a){
    if (a<=-0.251) return 'O';
    else if (a<=-0.001) return 'B';
    else if (a<=0.249) return 'A';
    else if (a<=0.499) return 'F';
    else if (a<=0.999) return 'G';
    else if (a<=1.499) return 'K';
    return 'M';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string s;
    double a, b;

    while(cin >> s){
        if (s=="END") break;
        cin >> a >> b;
        cout << s << ' ' << fixed << setprecision(2) << a-b << ' ' << level(a-b) << '\n';
    }

    return 0;
}