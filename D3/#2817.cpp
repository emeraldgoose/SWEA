// 2817. 부분 수열의 합
#include <iostream>
using namespace std;
int main() {
    int testCase, a;
	cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int N, K, sum, cnt=0;
        cin>>N>>K;
        int *arr = new int [N];
        for(int i=0;i<N;i++) cin>>arr[i];
        for(int i=0;i<(1<<N);i++) {
			sum=0;
            for(int j=0;j<N;j++) {
                if(i&(1<<j)) sum+=arr[j];
            	if(sum>K) break;
            }
            if(sum==K) cnt++;
        }
        cout<<"#"<<a<<" "<<cnt<<'\n'; delete[] arr;
    }
    return 0;
}