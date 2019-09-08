// 6730. 장애물 경주 난이도
#include <iostream>
using namespace std;
int main() {
    int testCase, a, i, n;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        cin>>n;
        int *arr = new int[n];
        for(i=0;i<n;i++) cin>>arr[i];
        int max_up=0, max_down=0;
        for(i=1;i<n;i++) {
            if((arr[i]-arr[i-1])>max_up) max_up=arr[i]-arr[i-1];
            if((arr[i]-arr[i-1]<max_down)) max_down=arr[i]-arr[i-1];
        }
        cout<<"#"<<a<<" "<<max_up<<" "<<max_down*-1<<endl;
        delete[] arr; arr=NULL;
    }
    return 0;
}