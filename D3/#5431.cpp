// 5431. 민석이의 과제 체크하기
#include <iostream>
using namespace std;
int main() {
    int testCase, a, i;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int n, k, tmp;
        cin>>n>>k;
        int *arr = new int[n+1];
        for(i=1;i<=n;i++)
            arr[i]=0;
        for(i=0;i<k;i++) {
            cin>>tmp;
            arr[tmp] = 1;
        }
        cout<<"#"<<a<<" ";
        for(i=1;i<=n;i++) {
            if(arr[i]==0) cout<<i<<" ";
        } cout<<"\n";
    }
    return 0;
}