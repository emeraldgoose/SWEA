// 5642. [Professional] 합
// 출처 : https://wootool.tistory.com/100
#include <iostream>
using namespace std;
int main() {
    int testCase,a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int N, tmp, sum, max=0;
        cin>>N;
        int *arr = new int [N];
        int *d = new int [N];
        for(int i=0;i<N;i++) cin>>arr[i];
        // calc
        d[0]=arr[0];
        for(int i=1;i<N;i++) {
            if(d[i-1]+arr[i]>arr[i]) d[i]=d[i-1]+arr[i];
            else d[i]=arr[i];
        }
        for(int i=0;i<N;i++) {
            if(d[i]>max) max=d[i];
        }
        // output
        cout<<"#"<<a<<" "<<max<<'\n';
        delete[] arr; delete[] d; // 동적할당 해제
    }
    return 0;
}