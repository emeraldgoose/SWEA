// 6485. 삼성시의 버스 노선
#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
		int N, P, start, end;
        cin>>N;
        int *cnt = new int[5001]; memset(cnt,0,sizeof(int)*5001);
        for(int i=0;i<N;i++) {
            cin>>start>>end;
            for(int j=start;j<=end;j++) cnt[j]++;
        }
        cin>>P;
        int *arr = new int[P];
        for(int i=0;i<P;i++) cin>>arr[i];
        // output
        cout<<"#"<<a<<" ";
        for(int i=0;i<P;i++) cout<<cnt[arr[i]]<<" ";
        cout<<"\n"; delete[] cnt; delete[] arr;
    }
    return 0;
}