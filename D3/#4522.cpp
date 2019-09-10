// 4522. 세상의 모든 팰린드롬
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        string str;
        cin>>str;
        int len = str.length();
        int tmp;
        if((len%2)!=0) tmp=len-1;
        else tmp=len;
        bool flag=true;
        for(int i=0;i<tmp;i++) {
            if(str[i]=='?' || str[len-i-1]=='?') continue;
            else if(str[i]!=str[len-i-1]) {
                flag=false; break;
            }
        }
        cout<<"#"<<a<<" ";
        if(flag) cout<<"Exist"<<endl;
        else cout<<"Not exist"<<endl;
    }
    return 0;
}