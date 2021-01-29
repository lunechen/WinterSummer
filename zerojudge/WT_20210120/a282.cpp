#include <bits/stdc++.h>
using namespace std;

int main(){
    set <int> p;
    int T, a;
    while(cin >> T){
        p.clear();

        while(T--){
            cin >> a;
            p.insert(a);
        }

        for (int i=1; i<=2000; i++){
            if (p.find(i)==p.end()){
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}