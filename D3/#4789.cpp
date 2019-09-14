// 4789. 성공적인 공연 기획
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        string arr;
        cin>>arr;
        int cnt=0, tmp, answer=0;
        for(int i=0;i<arr.length();i++) {
            if(i!=0 && cnt<i) {
                tmp = i-cnt;
                answer+=tmp; cnt+=tmp;
            }
            cnt+=arr[i]-'0';
        }
        cout<<"#"<<a<<" "<<answer<<endl;
    }
    return 0;
}