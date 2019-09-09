// 4406. 모음이 보이지 않는 사람#include <iostream>
using namespace std;
int main() {
    int testCase, a, i;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        char ch[50];
        cin>>ch;
        cout<<"#"<<a<<" ";
        for(i=0;i<50;i++) {
            if(ch[i]==NULL) break;
            if(ch[i]!='a' && ch[i]!='e' && ch[i]!='i' && ch[i]!='o' && ch[i]!='u') cout<<ch[i];
        } cout<<"\n";
    }
    return 0;
}