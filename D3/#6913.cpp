// 6913. 동철이의 프로그래밍 대회
// 6958. 동철이의 프로그래밍 대회 문제와 겹칩니다.
#include <iostream>
using namespace std;
int main() {
    int testCase, a, i, j;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int n, m, tmp, sum=0, max=-1, cnt=1;
        cin>>n>>m;
        for(i=0;i<n;i++) {
            for(j=0;j<m;j++) {
                cin>>tmp;
                sum += tmp;
            }
            if(cnt!=1 && sum>max) cnt=1;
            if(sum>max) max=sum;
            else if(sum==max) cnt++;
            sum=0;
        }
        cout<<"#"<<a<<" "<<cnt<<" "<<max<<endl;
    }
    return 0;
}