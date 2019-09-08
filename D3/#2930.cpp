// 2930. 힙
// cin, cout 를 사용하면 시간초과가 나서 scanf, printf를 사용했습니다.
#include <cstdio>
#include <queue>
using namespace std;
int main() {
    int testCase, a;
    scanf("%d",&testCase);
    for(a=1;a<=testCase;a++) {
        int N, op, add;
        scanf("%d",&N);
        priority_queue<int> pq;
        printf("#%d ",a);
        for(int i=0;i<N;i++) {
			scanf("%d",&op);
            if(op==1) {
                scanf("%d",&add); pq.push(add);
            }
            else {
                if(pq.empty()) printf("-1 ");
                else {
                    printf("%d ",pq.top()); pq.pop();
                }
            }
        }
        printf("\n");
    }
    return 0;
}