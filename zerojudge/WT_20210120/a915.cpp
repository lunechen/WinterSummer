#include <bits/stdc++.h>
using namespace std;

bool cmp(pair <int, int> a, pair <int, int> b){
    if (a.first == b.first) return a.second < b.second;
    else return a.first < b.first;
}

int main(){
    int n, m;
    pair <int, int> p[10000];

    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d %d", &p[i].first, &p[i].second);
    }

    sort(p, p+n, cmp);

    for (int i=0; i<n; i++){
        printf("%d %d\n", p[i].first, p[i].second);
    }

    return 0;
}