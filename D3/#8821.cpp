// 8821. 적고 지우기
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int testCase;
    cin>>testCase;
    for(int a=1;a<=testCase;a++) {
        int ans[10]; memset(ans,0,sizeof(int)*10);
        string str;
        cin>>str;
        for(int i=0;i<str.length();i++) ans[(str[i]-'0')]++;
        int cnt=0;
        for(int i=0;i<10;i++) {
            ans[i]%=2;
            if(ans[i]==1) cnt++;
        }
        cout<<"#"<<a<<" "<<cnt<<endl;
    }
    return 0;
}
