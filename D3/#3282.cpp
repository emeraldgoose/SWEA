// 3282. 0/1 Knapsack
// 출처 : http://hochulshin.com/01knapsack/
#include <iostream>
#include <cstring>
#define MAX(a,b) a>b ? a : b
using namespace std;
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int N, K; // N : cnt, K : knapsack volume
        cin>>N>>K;
        int *v = new int [N+1]; // volume
        int *c = new int [N+1]; // cost
        for(int i=1;i<=N;i++) cin>>v[i]>>c[i];
        int **ans = new int *[N+1];
        for(int i=0;i<N+1;i++) {
            ans[i] = new int[K+1]; memset(ans[i],0,sizeof(int)*(K+1));
        }
        
        // calc
        for(int i=1;i<=N;i++) {
            for(int j=1;j<=K;j++) {
                if(v[i]>j) ans[i][j] = ans[i-1][j];
                else ans[i][j] = MAX(c[i]+ans[i-1][j-v[i]],ans[i-1][j]);
            }
        }

        // output
        cout<<"#"<<a<<" "<<ans[N][K]<<'\n';

        // 동적할당 해제
        for(int i=0;i<=N;i++) delete[] ans[i]; delete[] ans;
        delete[] v; delete[] c;
    }
    return 0;
}