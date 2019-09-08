// 7102. 준홍이의 카드놀이
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int n, m, i, j, max=0;
        cin>>n>>m;
        int *arr = new int [n+m];
        memset(arr,0,sizeof(arr));
        for(i=1;i<=n;i++) {
            for(j=1;j<=m;j++) arr[i+j]+=1;
        }
        for(i=0;i<n+m;i++) {
            if(arr[i]>max) max=arr[i];
        }
        // output
        cout<<"#"<<a<<" ";
        for(i=0;i<n+m;i++) {
            if(arr[i]==max) cout<<i<<" ";
        } cout<<'\n';
    }
    return 0;
}