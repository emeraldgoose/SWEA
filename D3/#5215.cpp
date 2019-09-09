// 5215. 햄버거 다이어트
#include <iostream>
using namespace std;
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int i, j, N, L, sum_k, sum_t, max=0;
        cin>>N>>L;
        int *arr_t = new int [N];
        int *arr_k = new int [N];
        for(i=0;i<N;i++) cin>>arr_t[i]>>arr_k[i];
        for(i=0; i<(1<<N); i++) {
            sum_k=0, sum_t=0;
            for(j=0; j<N; j++) {
                if(i & ( 1 << j)) {
		   sum_k+=arr_k[j]; sum_t+=arr_t[j];
                }
            }
            if(sum_k<L) {
               if(sum_t>max) max=sum_t;
            }
        }
        cout<<"#"<<a<<" "<<max<<endl; delete[] arr_k; delete[] arr_t;
    }
    return 0;
}
