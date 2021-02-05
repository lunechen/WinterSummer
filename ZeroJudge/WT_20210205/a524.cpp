#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector <int> num;

    while(cin >> n){
        num.clear();

        while(n--) num.push_back(n+1);
        do{
            for (auto x:num) cout << x;
            cout << '\n';
        } while(prev_permutation(num.begin(), num.end()));
    }

    return 0;
}