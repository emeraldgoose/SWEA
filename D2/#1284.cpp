// 1284. 수도 요금 경쟁
#include <iostream>
using namespace std;
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int p,q,r,s,w;
        int A=0, B=0;
        cin>>p>>q>>r>>s>>w;
        A=w*p;
        if(w<=r) B=q;
        else B=q+((w-r)*s);
        cout<<"#"<<a<<" ";
        if(A>B) cout<<B<<endl;
        else cout<<A<<endl;
    }
    return 0;
}