#include <bits/stdc++.h>
using namespace std;

int main(){
    int x=0, y=0, T, a, b;
    cin >> T;
    
    while(T--){
        cin >> a >> b;
        if (a==1) x+=b;
        else if (a==2) y-=b;
        else if (a==3) x-=b;
        else y+=b;
    }

    cout << x << ' ' << y << '\n';
    return 0;
}