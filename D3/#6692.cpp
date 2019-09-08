// 6692. 다솔이의 월급 상자
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int testCase, a, i;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int n, Xi=0; double Pi=0, sum=0;
        cin>>n;
        for(i=0;i<n;i++) {
            cin>>Pi>>Xi;
            sum+=Pi*Xi;
        }
        cout<<"#"<<a<<" ";
        cout.setf(ios::showpoint);
        cout<<fixed;
        cout.precision(6);
        cout<<sum<<endl;
    }
    return 0;
}