// 8016. 홀수 피라미드
#include <iostream>
using namespace std;
int main() {
    int testCase, a, i;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        long p, left, right;
        cin>>p; p-=1;
        left=p*p*2+1; p+=1;
        right=p*p*2-1;
        cout<<"#"<<a<<" "<<left<<" "<<right<<endl;
    }
    return 0;
}