#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();

    for (int i=1; i<=t; i++){
        string tmp, ans, judge, tmp2;
        getline(cin, tmp);
        getline(cin, judge);
        
        if (tmp==judge) cout << "Case " << i << ": Yes\n";
        else{
            stringstream ss(tmp);
            while(ss >> tmp2) ans+=tmp2;
            if (ans==judge) cout << "Case " << i << ": Output Format Error\n";
            else cout << "Case " << i << ": Wrong Answer\n";
        }
    }

    return 0;
}