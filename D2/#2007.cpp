// 2007. 패턴 마디의 길이
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int testCase, i;
    cin>>testCase; cin.ignore(1,'\n');
    for(i=1;i<=testCase;i++) {
        char txt[30];
        cin.getline(txt,31);
        int p=2, cnt=0;
        while(1) {
            for(int k=0;k<p;k++) {
                if(txt[k]==txt[k+p]) cnt++;}
            if(cnt==p) break;
            cnt=0, p++;
        }
        cout<<"#"<<i<<" "<<p<<endl;
    }
    return 0;
}