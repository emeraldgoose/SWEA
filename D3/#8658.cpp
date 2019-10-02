// 8658. Summation
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        string str;
        int min=100000, max=0;
        for(int i=0;i<10;i++) {
            cin>>str;
            int sum=0;
            for(int j=0;j<str.length();j++) sum+=str[j]-'0';
            if(sum<min) min=sum;
            if(sum>max) max=sum;
        }
        cout<<"#"<<a<<" "<<max<<" "<<min<<endl;
    }
    return 0;
}
