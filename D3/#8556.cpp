// 8556. 북북서
#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int testCase,a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        string str;
        cin>>str;
        vector<int> v;
        for(int i=0;i<str.length();i++) {
            if(str[i]=='n') v.push_back(-1);
            else if(str[i]=='w') v.push_back(1);
        }
        int res=0, cnt=v.size()-1;
        for(int i=v.size()-1;i>=0;i--) {
            if(i==v.size()-1 && v[i]==-1) res=0;
            else res+=90*v[i]*pow(2,cnt);
            cnt--;
        }
        cnt=v.size()-1;
        while(1) {
            if(cnt>0 && res%2==0) {
                res/=2; cnt--;
            }
            else break;
        }
        if(res<0) res=0;
        cout<<'#'<<a<<' ';
        if(cnt>0) cout<<res<<'/'<<pow(2,cnt)<<endl;
        else cout<<res<<endl;
    }
    return 0;
}