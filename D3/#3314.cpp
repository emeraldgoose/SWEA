// 3314. 보충학습과 평균
#include <iostream>
using namespace std;
int main() {
    int testCase, a, i, sum=0;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
		int arr[5]={0,0,0,0,0};
        for(i=0;i<5;i++) {
            cin>>arr[i];
            if(arr[i]<40) arr[i]=40;
            sum += arr[i];
        }
        cout<<"#"<<a<<" "<<sum/5<<endl; sum=0;
    }
    return 0;
}