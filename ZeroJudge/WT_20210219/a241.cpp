#include <bits/stdc++.h>
using namespace std;

set <long long int> st;
vector <long long int> v;

void make(){
    for (long long int i=2; i<=100000000; i*=2){
        st.insert(i);
        for (long long int j=5; j<=100000000; j*=5){
            st.insert(i*j);
            st.insert(j);
        }
    }
    for (auto it:st) v.push_back(it);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    make();
    long long int T, a;
    
    while(cin >> T){
        while(T--){
            cin >> a;
            cout << upper_bound(v.begin(), v.end(), a)-v.begin() << '\n';
        }
    }

    return 0;
}