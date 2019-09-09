// 1213. [S/W 문제해결 기본] 3일차 - String
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int testCase, i, j, k, cnt=0, count=0;
    for(i=1;i<=10;i++) {
        cin>>testCase; cin.ignore(1,'\n');
        char p[10]; cin.ignore(10,'\n');
        char txt[1000]; cin.ignore(1000,'\n');
        cin.getline(p,10);
        cin.getline(txt,1000);
        int sLen=strlen(p);
        int lLen=strlen(txt);
        for(j=0;j<lLen;j++) {
            for(k=0;k<sLen;k++) {
                if(p[k]==txt[j+k]) cnt++;
            }
            if(cnt==sLen) count++;
            cnt=0;
        }
        cout<<"#"<<testCase<<" "<<count<<endl; count=0;
    }
    return 0;
}