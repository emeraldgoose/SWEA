// 1545. 거꾸로 출력해 보아요
#include <iostream>
using namespace std;
int main() {
    int i, num;
    cin>>num;
    i = num+1;
    while(i--) {
        cout<<i<<" ";
        if(i==0) break;
    }
    return 0;
}
