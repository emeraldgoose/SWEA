// 1970. 쉬운 거스름돈
#include <iostream>
using namespace std;
int main() {
    int testCase, i;
    cin>>testCase;
    for(i=1;i<=testCase;i++) {
        int won, num=50000, b=5;
        cin>>won;
        cout<<"#"<<i<<'\n';
        while(1) {
            cout<<(int)won/num<<" "; won -= (int)(won/num)*num;
            if(num==10) break;
            num = num / b;
            if(b==5) b=2;
            else if (b==2) b=5;
        }
        cout<<'\n';
    }
    return 0;
}