#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, tmp;
    multiset <int> num;

    while(scanf("%d", &n)!=EOF){
        num.clear();

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
}#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, tmp;
    multiset <int> num;

    while(scanf("%d", &n)!=EOF){
        num.clear();

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