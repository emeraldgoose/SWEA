// 5789. 현주의 상자 바꾸기
#include <iostream>
using namespace std;
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int n, q, i, j, l, r;
        cin>>n>>q;
        int *arr = new int[n];
        for(i=0;i<n;i++)
             arr[i]=0;
        for(i=1;i<=q;i++) {
            cin>>l>>r;
            for(j=l-1;j<r;j++)
                arr[j]=i;
        }
        cout<<"#"<<a;
        for(i=0;i<n;i++)
            cout<<" "<<arr[i];
        cout<<endl;
    }
    return 0;
}