// 3347. 올림픽 종목 투표
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int i, j, N, M;
        cin>>N>>M;
        int *A = new int [N];
        int *B = new int [M];
        int *cnt = new int [N]; memset(cnt,0,sizeof(int)*N);
        for(i=0;i<N;i++) cin>>A[i];
        for(i=0;i<M;i++) cin>>B[i];
        for(i=0;i<M;i++) {
            for(j=0;j<N;j++) {
                if(B[i]>=A[j]) {
                    cnt[j]++; break;
                }
            }
        }
        int max=0, idx;
        for(i=0;i<N;i++) {
            if(cnt[i]>max) {
               max=cnt[i]; idx=i;
            }
        }
        cout<<"#"<<a<<" "<<idx+1<<endl;
        delete[] A; delete[] B; delete[] cnt;
    }
    return 0;
}
