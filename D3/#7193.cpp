// 7193. 승현이의 수학공부
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        string str;
        int N;
        cin>>N;
        cin>>str;
        long sum=0;
        for(int i=0;i<str.length();i++) sum+=str[i]-'0';
        cout<<"#"<<a<<" "<<sum%(N-1)<<endl;
    }
    return 0;
}