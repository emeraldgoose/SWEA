// 8500. 극장 좌석
#include <iostream>
using namespace std;
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int N, tmp, res=0, max=0;
        cin>>N;
        for(int i=0;i<N;i++) {
            cin>>tmp;
            if(tmp>max) max=tmp;
            res+=tmp;
        }
        res=res+N+max;
        cout<<"#"<<a<<" "<<res<<endl;
    }
    return 0;
}