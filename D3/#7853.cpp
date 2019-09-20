// 7853. 오타
#include <iostream>
#include <cstring>
#define DIV 1000000007
using namespace std;
int main(){
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        string str;
        cin>>str;
        long ans=1;
        for(int i=0;i<str.length();i++) {
            if(i==0) {
            	if(str[i]!=str[i+1]) ans*=2;
                else ans*=1;
            }
            else if(i==str.length()-1) {
            	if(str[i-1]!=str[i]) ans*=2;
                else ans*=1;
            }
            else {
            	if(str[i-1]!=str[i] && str[i]!=str[i+1]){
                    if(str[i-1]!=str[i+1]) ans*=3;
                    else ans*=2;
                }
                else if(str[i-1]==str[i] && str[i]==str[i+1]) ans*=1;
                else ans*=2;
            }
            ans%=DIV;
        }
        ans%=DIV;
        cout<<"#"<<a<<" "<<ans<<'\n';
    }
    return 0;
}
