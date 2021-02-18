#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int a, b, c, ans;

    while(cin >> a){
        cin >> b;
        ans=1;
        c=1;

        for (int i=b+1; i<=a; i++){
            ans*=i;
            if (c<=a-b){
                ans/=c;
                c++;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}