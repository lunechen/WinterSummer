#include <cstdio>
#include <cstdlib>
#include <set>
using namespace std;

multiset <long long> num;

int main(){
    long long a, b;
    while(scanf("%ld", &a)!=EOF){
        if (a==1){
            scanf("%ld", &b);
            num.insert(b);
        }
        else if (a==2){
            auto it=num.end();
            it--;
            printf("%ld\n", *it);
            num.erase(it);
        }
        else {
            auto it=num.begin();
            printf("%ld\n", *it);
            num.erase(it);
        }
    }

    return 0;
}