// 3456. 직사각형 길이 찾기
#include <iostream>
using namespace std;
int main() {
    int testCase, a, i;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int arr[3], result;
        for(i=0;i<3;i++)
            cin>>arr[i];
        if(arr[0]==arr[1]) result=arr[2];
        else result = arr[0]+arr[1]-arr[2];
        cout<<"#"<<a<<" "<<result<<endl;
    }
    return 0;
}