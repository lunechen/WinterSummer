#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;

    while(getline(cin, s)){
        int flag=0;
        int ba=0, sa=0, ds=0;

        if (s.size()>=8) flag++;
        for (int i=0; i<s.size(); i++){
            if (isalpha(s[i])){
                if (isupper(s[i])) ba=1;
                else sa=1;
            }
            else ds=1;
        }
        if (ba && sa) flag++;
        if ((ba || sa) && ds) flag++;

        if (flag==3) cout << "This password is STRONG\n";
        else if (flag==2) cout << "This password is GOOD\n";
        else if (flag==1) cout << "This password is ACCEPTABLE\n";
        else cout << "This password is WEAK\n";
    }

    return 0;
}