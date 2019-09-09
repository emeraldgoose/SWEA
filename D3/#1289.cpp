// 1289. 원재의 메모리 복구하기
// ?
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main() {
    int testCase, a, i;
    cin>>testCase; cin.ignore(2,'\n');
    for(a=1;a<=testCase;a++) {
        char arr[50];
        scanf("%s",arr);
        int cnt=0, len=strlen(arr)-1;
        for(i=0;i<len;i++) {
            if(arr[i]=='0' || arr[i]=='1' || arr[i+1]=='0' || arr[i+1]=='1') {
                if(arr[i]!=arr[i+1]) cnt++;
            }
        }
        if(arr[0]=='1') cnt++;
        cout<<"#"<<a<<" "<<cnt<<endl;
        memset(arr,NULL,51);
    }
    return 0;
}