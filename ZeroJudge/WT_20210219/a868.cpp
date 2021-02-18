#include <bits/stdc++.h>
using namespace std;

int tonum(string tmp){
    string a[]={"TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE", "TEN", "ELEVEN", "TWELVE", "THIRTEEN"};
    for (int i=0; i<12; i++) if (tmp==a[i]) return i+2;
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int num=1;
    string tmp;
    vector < pair <string, int>  > vp;
    for (int i=0; i<4; i++){
        for (int j=0; j<3; j++) cin >> tmp;
        cin >> tmp;
        num=num*tonum(tmp);
        cin >> tmp;
        vp.push_back(make_pair(tmp, num));
    }

    for (int i=0; i<3; i++) cin >> tmp;
    tmp.pop_back();

    for (int i=0; i<4; i++){
        if (tmp==vp[i].first) cout << vp[i].second << ' ' << vp[i].first << '\n';
    }
    
    return 0;
}