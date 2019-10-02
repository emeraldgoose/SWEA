// 8659. GCD
#include <iostream>
using namespace std;
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int K;
        cin>>K;
        long r=1, s=2, b=0, tmp=0;
        for(int i=0;i<K-1;i++) {
            tmp=s; s+=r; r=tmp; b=tmp; 
        }
        if(K==0) s=1, b=0;
        else if(K==1) s=2, b=1;
        cout<<"#"<<a<<" "<<s<<" "<<b<<endl;
    }
    return 0;
}
