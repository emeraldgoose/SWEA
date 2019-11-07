// 8840. 아바바바
#include <cstdio>
using namespace std;
int main() {
    int testCase;
    scanf("%d",&testCase);
    for(int a = 1;a<=testCase;a++) {
        long L;
        scanf("%ld",&L);
        L = (L-1)/2;
        printf("#%d %ld\n",a,L*L);
    }
    return 0;
}