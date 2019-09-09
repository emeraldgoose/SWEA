// 5601. [Professional] 쥬스 나누기
#include <iostream>
using namespace std;
int main() {
    int testCase, a, i;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int n;
        cin>>n;
        cout<<"#"<<a<<" ";
        for(i=1;i<=n;i++) cout<<"1"<<"/"<<n<<" ";
        cout<<'\n';
    }
    return 0;
}