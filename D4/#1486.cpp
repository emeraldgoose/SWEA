// 1486. 장훈이의 높은 선반
#include <iostream>
using namespace std;
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int i, j, N, B, sum, min=10001;
        cin>>N>>B;
        int *H = new int[N];
        for(i=0;i<N;i++) cin>>H[i];
        for(i=0;i<(1<<N);i++) {
            sum=0;
			for(j=0;j<N;j++) {
                if(i&(1<<j)) sum+=H[j];
            }
            if((sum-B)>=0 && (sum-B)<min) min=sum-B;
        }
        cout<<"#"<<a<<" "<<min<<endl; delete[] H;
    }
    return 0;
}