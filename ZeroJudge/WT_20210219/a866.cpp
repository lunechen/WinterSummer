#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int a, cnt=0;
    double avg=0.0;
    int num[6]={0};

    while(cin >> a){
        if (a==0) break;
        num[a]++;
        avg+=(double)a;
        cnt++;
    }

    for (int i=5; i>=1; i--){
        cout << i << " (" << setfill(' ') << setw(2) << num[i] << ") |";
        for (int j=0; j<num[i]; j++) cout << '=';
        cout << '\n';
    }
    cout << fixed << setprecision(4) << "Average rating: " << floor(avg/cnt*10000+0.5)/10000 << '\n';

    return 0;
}