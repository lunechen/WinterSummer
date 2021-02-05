#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T, m, a;
    cin >> T >> m;

    while(T--){
        set <int> num;
        int cnt=0;

        for (int i=0; i<m; i++){
            cin >> a;
            num.insert(a);
        }
        for (int i=0; i<m; i++){
            cin >> a;
            if (num.find(a)!=num.end()) cnt++;
        }

        cout << cnt << '\n'; 
    }

    return 0;
}