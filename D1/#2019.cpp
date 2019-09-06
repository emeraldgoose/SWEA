// 2019. 더블더블
#include <iostream>
using namespace std;
int main() {
    int num, tmp=1;
    cin>>num;
    for(int i=0;i<=num;i++) {
    	cout<<tmp<<" ";
        tmp = tmp * 2;
    }
    return 0;
}
