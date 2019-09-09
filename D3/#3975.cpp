// 3975. 승률 비교하기
#include<stdio.h>
int main() {
    int testCase, i;
    scanf("%d",&testCase);
    for(i=1;i<=testCase;i++) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        double alice = (double) a / (double)b, bob = (double) c / (double) d;
        if(alice>bob) printf("#%d ALICE\n",i);
        else if(alice<bob) printf("#%d BOB\n",i);
        else printf("#%d DRAW\n",i);
    }
    return 0;
}