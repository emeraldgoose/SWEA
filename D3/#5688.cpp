// 5688. 세제곱근을 찾아라
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int testCase, a;
    scanf("%d",&testCase);
    for(a=1;a<=testCase;a++) {
        long long test, i=1;
        scanf("%lld",&test);
        for(i=1;i<=1000000;i++) {
            if(test==(i*i*i)) break;
        }
        if(i>1000000) i=-1;
        printf("#%d %lld\n",a,i);
    }
    return 0;
}