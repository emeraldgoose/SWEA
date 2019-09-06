// 2029. 몫과 나머지 출력하기
#include <iostream>
using namespace std;
int main() {
    int testCase, tc;
    cin>>testCase;
    for(tc=1;tc<=testCase;tc++) {
        int a, b;
        cin>>a>>b;
        cout<<"#"<<tc<<" "<<a/b<<" "<<a%b<<endl;
    }
    return 0;
}