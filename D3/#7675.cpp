// 7675. 통역사 성경이
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int N;
        cin>>N;
        int *cnt = new int[N]; memset(cnt,0,sizeof(int)*N);
        int count=0;
        // count
        while(count!=N) {
            bool flag=true;
            string str;
            cin>>str;
            int len = str.length();
            if(str[0]<65 || str[0]>90) flag=false;
            else {
                int tmp;
                if(str[len-1]==33 || str[len-1]==46 || str[len-1]==63) tmp=len-1;
                else tmp=len;
                for(int i=1;i<tmp;i++) {
                    if(str[i]<97 || str[i]>122) flag=false;
                }
            }
            if(flag) cnt[count]++;
            if(str[len-1]==33 || str[len-1]==46 || str[len-1]==63) count++;
        }
        // output
        cout<<"#"<<a<<" ";
        for(int i=0;i<N;i++) cout<<cnt[i]<<" ";
        cout<<'\n';
        delete[] cnt;
    }
    return 0;
}