// 8741. 두문자어
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main() {
    int testCase;
    cin>>testCase; cin.ignore(1,'\n');
    for(int a=1;a<=testCase;a++) {
        char str[63];
        cin.getline(str,63);
        int cnt=0;
        vector<char> v;
        for(int i=0;i<63;i++) {
            if(cnt==0) v.push_back(str[i]-32);
            if(str[i]==' ') cnt=0;
            else cnt++;
        }
        cout<<"#"<<a<<" "<<v[0]<<v[1]<<v[2]<<endl;
    }
    return 0;
}