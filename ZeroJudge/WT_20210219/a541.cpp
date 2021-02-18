#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    string s;
    set <string> st;
    cin >> T;

    while(T--){
        cin >> s;
        st.insert(s); 
    }

    cin >> T;
    while(T--){
        cin >> s;
        if (st.find(s)!=st.end()) cout << "yes\n";
        else{
            st.insert(s);
            cout << "no\n";
        }
    }
    return 0;
}