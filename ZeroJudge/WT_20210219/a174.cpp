#include <bits/stdc++.h>
using namespace std;

int main(){
    map <int, set <int> > mp;
    int T, m;
    
    while(scanf("%d", &T)!=EOF){
        scanf("%d", &m);
        mp.clear();
        
        while(T--){
            int a, b;
            scanf("%d", &a);

            if (a==1){
                scanf("%d", &b);
                mp[b%m].insert(b);
            }

            else if (a==2){
                scanf("%d", &b);
                mp[b%m].erase(b);
            }

            else if (a==3){
                printf("===== s =====\n");
                for (int i=0; i<m; i++){
                    printf("[%03d]:", i);
                    if (mp[i].empty()) printf("NULL\n");
                    else{
                        for (auto it=mp[i].begin(); it!=mp[i].end(); it++) printf("%d -> ", *it);
                        printf("NULL\n");
                    }
                }
                printf("===== e =====\n");
            }
        }
    }

    return 0;
}