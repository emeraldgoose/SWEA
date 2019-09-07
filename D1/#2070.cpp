// 2070. 큰놈, 작은놈, 같은놈
#include <iostream>
using namespace std;
int main() {
    int testCase, tc;
    cin>>testCase;
    for(tc=1;tc<=testCase;tc++) {
        char result;
        int num1, num2;
   		cin>>num1>>num2;
        if(num1 > num2) result = '>';
        else if(num1 < num2) result = '<';
        else result = '=';
        cout<<"#"<<tc<<" "<<result<<endl;
    }
    return 0;
}
