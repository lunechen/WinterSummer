#include <bits/stdc++.h>
using namespace std;

vector <long long> prime;
int l[50000];

void prime_list(){
    l[0]=1;
    l[1]=1;

    for(int i=0; i<50000; i++){
        if (l[i]==0){
            prime.push_back(i);
            for (int j=2; i*j<50000; j++) l[i*j]=1;
        }
    }
}

int main(){
    prime_list();

    long long a;

    while(scanf("%lld", &a)!=EOF){
        int flag=1;
        for (int i=0; i<50000 && prime[i]*prime[i]<a; i++){
            if (a%prime[i]==0){
                flag=0;
                break;
            }
        }
        if (!flag) printf("非質數\n");
        else printf("質數\n");
    }

    return 0;
}