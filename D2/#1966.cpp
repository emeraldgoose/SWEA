// 1966. 숫자를 정렬하자
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int N;
        cin>>N;
        int *arr = new int [N];
        for(int i=0;i<N;i++) cin>>arr[i];
        sort(arr,arr+N);
        cout<<"#"<<a<<" ";
        for(int i=0;i<N;i++) cout<<arr[i]<<" ";
        delete[] arr; cout<<'\n';
    }
    return 0;
}