// 8993. 하지 추측
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int testCase;
    cin>>testCase;
    for(int a=1;a<=testCase;a++) {
        long N;
        cin>>N;
        int k=1;
        bool flag=false;
        for(int i=1;i<47;i++) {
            if(N==pow(2,i)) flag=true;
        }
        cout<<"#"<<a<<" ";
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}