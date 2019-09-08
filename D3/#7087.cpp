// 7087. 문제 제목 붙이기
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        string str;
        int n, i, arr[26], cnt=0;
        memset(arr,0,sizeof(arr));
        cin>>n;
        for(i=0;i<n;i++) {
            cin>>str;
            arr[str.at(0)-65]=1;
        }
        for(i=0;i<n;i++) {
            if(arr[i]==1) cnt++;
            else break;
        }
    cout<<"#"<<a<<" "<<cnt<<endl;
    }
    return 0;
}