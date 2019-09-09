// 5549. 홀수일까 짝수일까
#include <iostream>
#include <string.h>
using namespace std;
int main() {
	int testCase, a, i;
    cin>>testCase; cin.ignore(1,'\n');
    for(a=1;a<=testCase;a++) {
        char tmp[101], num=0;
        cin.getline(tmp,101); 
        for(i=0;i<101;i++) {
            if(isdigit(tmp[i])) num=tmp[i];
        }
        if(num=='0'||num=='2'||num=='4'||num=='6'||num=='8') cout<<"#"<<a<<" "<<"Even"<<endl;
        else cout<<"#"<<a<<" "<<"Odd"<<endl;
        memset(tmp,NULL,101);
    }
    return 0;
}