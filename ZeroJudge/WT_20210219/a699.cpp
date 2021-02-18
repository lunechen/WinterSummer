#include <bits/stdc++.h>
using namespace std;

set <int> prime;
int tmp[1000000];

void ml(){
    tmp[0]=1;
    tmp[1]=1;
    for (int i=2; i<1000000; i++){
        if (!tmp[i]){
            for (int j=2; i*j<1000000; j++) tmp[i*j]=1;
            prime.insert(i);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ml();
    
    int a;
    while(cin >> a){
        if (prime.find(a)!=prime.end()) cout << "It's a prime!!!\n";
        else cout << "It's not a prime!!!\n";
    }

    return 0;
}