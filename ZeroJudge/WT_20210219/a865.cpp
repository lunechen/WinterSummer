#include <bits/stdc++.h>
using namespace std;

char tp[]="ABGDE#ZYHIKLMNXOPQRSTUFC$W3";
map <char, int> mp;

void ml(){
    int a=1;
    for (int i=0; i<3; i++){
        for (int j=1; j<=9; j++){
            mp[tp[i*9+j-1]]=j*(pow(10, i));
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ml();
    string s;
    while(cin >> s){
        if (s==".")break;
        
        int ans=0;
        char c;
        stringstream ss(s);

        while(ss >> c){
            ans+=mp.find(c)->second;
        }
        cout << ans << '\n';
    }
    return 0;
}