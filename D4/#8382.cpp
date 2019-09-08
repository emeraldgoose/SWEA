// 8382. 방향 전환
#include <iostream>
using namespace std;
int main() {
    int testCase, tc;
    cin>>testCase;
    for(tc=1;tc<=testCase;tc++) {
        int x1, y1, x2, y2, a, b;
        cin>>x1>>y1>>x2>>y2;
        x2-=x1, y2-=y1;
        if(x2<0) x2*=-1;
        if(y2<0) y2*=-1;
        x1=0, y1=0;
        if(x2>y2) {
            b=y2; a=x2-y2;
        }
        else {
            b=x2; a=y2-x2;
        }
        if((a%2)==0) a=4*(a/2);
        else a=4*(a/2)+1;
        cout<<"#"<<tc<<" "<<a+2*b<<endl;
    }
    return 0;
}