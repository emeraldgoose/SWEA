// 2072. 홀수만 더하기
#include <iostream>
using namespace std;
int main() {
	int testCase, tc;
    cin>>testCase;
    for(tc=1;tc<=testCase;tc++) {
        int total = 0,seq[10];
    	for (int i=0;i<10;i++) {
            cin>>seq[i];
        	if (seq[i]%2 == 1) total += seq[i];
        }
        cout<<"#"<<tc<<" "<<total<<endl;
    }
    return 0;
}