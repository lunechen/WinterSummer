#include <bits/stdc++.h>
using namespace std;

int main(){
    int idx=0, maxa=0;
    string s[16], tmp;
    
    while(getline(cin, tmp)){
        if (tmp=="END") break;
        if (tmp.size()>maxa) maxa=tmp.size();
        s[idx]=tmp;
        idx++;
    }

    for (int i=0; i<maxa; i++){
        for (int j=0; j<idx; j++){
            if (s[j].size()>i) cout << s[j][i] << "  ";
            else cout << "   ";
        }
        cout << '\n';
    }

    return 0;
}