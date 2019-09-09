// 3431. 준환이의 운동관리
#include <iostream>
using namespace std;
int main() {
    int testCase, a, result;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int L=0, U=0, X=0;
        cin>>L>>U>>X;
        if(X<L) result=L-X;
        else if(L<=X && X<=U) result=0;
        else result=-1;
        cout<<"#"<<a<<" "<<result<<endl;
    }
    return 0;
}