// 2071. 평균값 구하기
#include <iostream>
using namespace std;
int main() {
 	int testCase, tc;
    cin>>testCase;
    for(tc=1;tc<=testCase;tc++) {
        int seq[10], total=0;
        for(int i=0;i<10;i++) {
            cin>>seq[i]; total += seq[i];
    	}
        cout<<"#"<<tc<<" "<<(total+5)/10<<endl;
    }
    return 0;
}