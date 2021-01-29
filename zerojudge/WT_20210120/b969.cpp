#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <string> w;
    string tmp;
    char c;

    while((c=getchar())!='\n'){
        if (c==' '){
            w.push_back(tmp);
            tmp.clear();
        }
        else tmp+=c;
    }

    w.push_back(tmp);
    getline(cin, tmp);

    for (int i=0; i<w.size(); i++){
        cout << tmp << ", " << w[i] << endl;
    }
    return 0;
}