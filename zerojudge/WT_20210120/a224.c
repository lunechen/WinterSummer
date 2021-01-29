#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve(int *cnt){
    int flag=0;
    for (int i=0; i<26; i++){
        if (cnt[i]%2 && flag==1){
            printf("no...\n");
            return;
        }
        else if (cnt[i]%2){
            flag=1;
        }
    }
    printf("yes !\n");
}

int main(){
    char c;
    int cnt[26]={0};

    while((c=getchar())!=EOF){
        if (c>='A' && c<='Z')   cnt[c-'A']+=1;
        else if (c>='a' && c<='z')  cnt[c-'a']+=1;
        else if (c=='\n') {
            solve(cnt);
            memset(cnt, 0, sizeof(int)*26);
        }
    }

    solve(cnt);

    return 0;
}