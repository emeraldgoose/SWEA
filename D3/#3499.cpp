// 3499. 퍼펙트 셔플
// 출처 : https://his130.tistory.com/300
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int N, half;
        cin>>N;
        vector<string> s1;
        vector<string> s2;
        if((N%2)==0) half=N/2;
        else half=N/2+1;
        for(int i=0;i<N;i++) {
            string str;
            cin>>str;
            if(i<half) s1.push_back(str);
            else s2.push_back(str);
        }
        cout<<"#"<<a<<" ";
        int n1=0, n2=0;
        for(int i=0;i<N;i++) {
            if((i%2)==1) cout<<s2[n1++]<<" ";
            else cout<<s1[n2++]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}