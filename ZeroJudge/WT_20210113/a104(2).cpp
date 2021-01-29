#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, tmp;

    while(scanf("%d", &n)!=EOF){
        multiset <int> num;

        for (int i=0; i<n; i++){
            scanf("%d", &tmp);
            num.insert(tmp);
        }

        for (auto it:num){
            printf("%d ", it);
        }
        printf("\n");
    }
    return 0;
}