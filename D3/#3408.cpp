// 3408. 세가지 합 구하기
#include <iostream>
using namespace std;
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        long N, S1, S2, S3;
        cin>>N;
        if((N%2)==0) {
            S1=(N+1)*(int)(N/2); S2=2*N*(int)(N/2); S3=(2*N+2)*(int)(N/2);
        }
        else {
            S1=(N+2)*(int)(N/2)+1; S2=2*N*(int)(N/2)+N; S3=(2*N+2)*(int)(N/2)+N+1;
        }
        cout<<"#"<<a<<" "<<S1<<" "<<S2<<" "<<S3<<'\n';
    }
    return 0;
}