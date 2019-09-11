// 1989. 초심자의 회문 검사
#include <cstdio>
#include <cstring>
int main() {
    int testCase, i;
    scanf("%d",&testCase);
    for(i=1;i<=testCase;i++) {
        int j, result=0;
        char ch[10];
        scanf("%s",ch);
        int len=strlen(ch);
        for(j=0;j<(len/2);j++) {
            if(ch[j] != ch[len-j-1]) result = 1;
        }
        if(result == 1) printf("#%d 0\n",i);
        else printf("#%d 1\n", i);
    }
    return 0;
}