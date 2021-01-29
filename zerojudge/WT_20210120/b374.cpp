#include <bits/stdc++.h>
using namespace std;

int main(){
    map <int, int> a;
    int T, tmp;
    int maxi, maxv=0;

    scanf("%d", &T);
    
    while (T--){
        scanf("%d", &tmp);
        a[tmp]+=1;
        if (a[tmp] > maxv) maxv=a[tmp];
    }

    for (auto it=a.begin(); it!=a.end(); it++){
        if (maxv == (*it).second){
            printf("%d %d\n", (*it).first, maxv);
        }
    }

    return 0;
}