#include <bits/stdc++.h>
using namespace std;

multiset <int> number;

int main(){
    int t, n, d;
    int a, s;

    scanf("%d", &t);

    for (int i=0; i<t; i++){
        scanf("%d %d", &n, &d);

        for (int j=0; j<n; j++){
            scanf("%d", &a);
            number.insert(a);
        }

        auto it=number.begin();
        it++;
        auto it2=number.end();
        it2--;
        if (*(number.begin())+*(it)<=d || *it2 <=d) printf("YES\n");
        else printf("NO\n");
        
        number.clear();
    }

    return 0;
}