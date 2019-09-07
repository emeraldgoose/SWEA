// 6959. 이상한 나라의 덧셈게임
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        string str;
        cin>>str;
        int cnt=0;
        int len = str.length();
        int *arr = new int [len];
        for(int i=0;i<len;i++) arr[i]=str[i]-48;
        for(int i=1;i<len;i++) {
            int sum = arr[i-1]+arr[i];
            if(sum>9) {
                arr[i]=sum-9; arr[i-1]=0; cnt+=2;
            }
            else {
                arr[i]=sum; arr[i-1]=0; cnt++;
            }
        }
        cout<<'#'<<a<<' ';
        if((cnt%2)==0) cout<<"B"<<'\n';
        else cout<<"A"<<'\n';
        delete[] arr;
    }
}