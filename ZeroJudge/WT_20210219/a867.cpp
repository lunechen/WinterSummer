#include <bits/stdc++.h>
using namespace std;

char mine[17][32];

void siege(){
    for (int i=0; i<32; i++){
        mine[0][i]='-';
        mine[16][i]='-';
        if (i<17){
            mine[i][0]='-';
            mine[i][31]='-';
        }
    }
}

void inmap(){
    char c;

    for (int i=1; i<=15; i++){
        for (int j=1; j<=30; j++){
            cin >> c;
            mine[i][j]=c;
        }
    }
}

void print(){
    int a[3]={-1, 0, 1};
    int tmp;

    for (int i=1; i<=15; i++){
        for (int j=1; j<=30; j++){
            tmp=0;
            if (mine[i][j]=='*') cout << '*';
            
            else {
                for (int ii=0; ii<3; ii++){
                    for (int jj=0; jj<3; jj++){
                        if (mine[i+a[ii]][j+a[jj]]=='*') tmp++; 
                    }
                }
                if (tmp==0) cout << '.';
                else cout << tmp;
            }
        }
        cout << '\n';
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    siege();
    inmap();
    print();

    return 0;
}