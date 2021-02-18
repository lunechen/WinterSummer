#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int a;
    while(cin >> a){
        if (a==0) break;
        vector <int> num;
        int ans=0;
        
        while(a){
            if (a%2){
                num.push_back(1);
                ans++;
            }
            else num.push_back(0);
            a/=2;
        }
        reverse(num.begin(), num.end());

        cout << "The parity of ";
        for (auto it:num) cout << it;
        cout << " is " << ans << " (mod 2).\n";
    }

    return 0;
}