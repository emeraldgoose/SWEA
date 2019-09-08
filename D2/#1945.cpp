// 1945. 간단한 소인수분해
#include <iostream>
using namespace std;
int solve(int divisor, int dividend) {
	int count = 0;
	int tmp=dividend;
    while(1) {
        if((tmp%divisor)==0) {
            count += 1; tmp=tmp/divisor;
        }
        else break;
    }
    return count;
}
int main() {
	int testCase, a;
	int num;
    cin>>testCase;
	for (a = 1; a <= testCase; a++) {
		cin>>num;
		cout<<"#"<<a<<" ";
		cout<<solve(2,num)<<" ";
		cout<<solve(3,num)<<" ";
		cout<<solve(5,num)<<" ";
		cout<<solve(7,num)<<" ";
		cout<<solve(11,num)<<endl;
	}
	return 0;
}