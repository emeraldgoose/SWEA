// 6719. 성수의 프로그래밍 강좌 시청
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int N, K;
        cin>>N>>K;
        int *arr = new int [N];
        for(int i=0;i<N;i++) cin>>arr[i];
        sort(arr,arr+N);
        double sum=0;
        for(int i=N-K;i<N;i++) {
            sum+=arr[i];
            sum=(double)sum/2;
        }
        cout<<"#"<<a<<" ";
        cout<<fixed;
        cout.precision(6);
        cout<<sum<<endl;
    }
    return 0;
}