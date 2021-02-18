#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b){
    if (a[0]=='-' && b[0]=='-'){
        if (a.length()==b.length()) return a>b;
        return a.length()>b.length();
    }

    else if (a[0]=='-') return 1;
    else if (b[0]=='-') return 0;

    if (a.length()==b.length()) return a<b;
    return a.length()<b.length();
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;

    while(cin >> T){
        vector <string> v;
        string tmp;
        
        while(T--){
            cin >> tmp;
            v.push_back(tmp);
        }

        sort(v.begin(), v.end(), cmp);
        for(auto it:v) cout << it << '\n';
    }

    return 0;
}