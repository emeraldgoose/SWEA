// 8104. 조 만들기
#include <iostream>
using namespace std;
int main() {
    int testCase, a, i;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int n, k, sum=0;
        cin>>n>>k;
        int num1=1, num2=2*k, flag=1;
        for(i=1;i<=n;i++) {
            if(flag==1) {
                sum+=num1; flag=2; num1+=2*k;
            }
            else {
                sum+=num2; flag=1; num2+=2*k;
            }
        }
        if((n%2)==0) {
            cout<<"#"<<a<<" ";
            for(i=1;i<=k;i++)
                cout<<sum<<" ";
        }
        else {
            cout<<"#"<<a<<" ";
            for(i=0;i<k;i++)
                cout<<sum+i<<" ";
        } cout<<'\n';
    }
    return 0;
}