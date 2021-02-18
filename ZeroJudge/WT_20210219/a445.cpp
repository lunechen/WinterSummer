#include <bits/stdc++.h>
using namespace std;

int mice[100000];
int check[100000];

int lead(int a){
    if (a==mice[a]) return a;

    mice[a]=lead(mice[a]);
    return mice[a];
}

void in(int a, int b){
    if (check[a]==0){
        mice[a]=a;
        check[a]=1;
    }
    if (check[b]==0){
        mice[b]=b;
        check[b]=1;
    }
    if (a==b) return;

    mice[lead(a)]=lead(b);
}

void ques(int a, int b){
    if (mice[a]==mice[b]) cout << ":)\n";
    else cout << ":(\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, T, Q, a, b;
    cin >> n >> T >> Q;

    while(T--){
        cin >> a >> b;
        in(a, b);
    }

    for (int i=1; i<=n; i++){
        if (check[i]) lead(i);
        else mice[i]=i;
    }

    while(Q--){
        cin >> a >> b;
        ques(a, b);
    }

    return 0;
}