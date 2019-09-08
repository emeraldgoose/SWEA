// 7728. 다양성 측정
#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int testCase, a, i;
	cin>>testCase;
	for(a=1;a<=testCase;a++) {
        int arr[10]={0}, cnt=0;
        string num;
        cin>>num;
        for(i=0;i<num.length();i++) arr[num.at(i)-48]=1;
        for(i=0;i<10;i++) {
                if(arr[i]==1) cnt++;
        }
        cout<<"#"<<a<<" "<<cnt<<endl;
    }
    return 0;
}