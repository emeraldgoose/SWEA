// 3233. 정삼각형 분할 놀이
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        long A, B;
        cin>>A>>B;
        long res = pow((A/B),2);
        cout<<"#"<<a<<" "<<res<<endl;
    }
    return 0;
}