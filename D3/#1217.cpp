// 1217. [S/W 문제해결 기본] 4일차 - 거듭 제곱
#include <iostream>
using namespace std;
int solve(int num, int cnt) {
    if(cnt==0) return 1;
    return num*solve(num,cnt-1);
}
int main() {
    int a, n, m, testCase;
    for(a=1;a<=10;a++) {
        cin>>testCase;
        cin>>n>>m;
        cout<<"#"<<testCase<<" "<<solve(n,m)<<endl;
    }
    return 0;
}