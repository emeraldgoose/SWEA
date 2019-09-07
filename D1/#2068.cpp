// 2068. 최대수 구하기
#include <iostream>
using namespace std;
int main() {
 	int testCase, tc;
    cin>>testCase;
    for(tc=1;tc<=testCase;tc++) {
        int seq[10], max=0;
     	for(int i=0;i<10;i++) {
            cin>>seq[i];
         	if(seq[i]>max) max = seq[i];
        }
        cout<<"#"<<tc<<" "<<max<<endl;
    }  
    return 0;
}