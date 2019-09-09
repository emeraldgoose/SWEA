// 2805. 농작물 수확하기
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int testCase, a, i, j;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int n, half, sum=0;
        cin>>n; half=n/2;
        int left=half, right=half;
        int *arr = new int[n];
        for(i=0;i<n;i++) {
            for(j=0;j<n;j++) scanf("%1d",&arr[j]);
            for(j=left;j<=right;j++) sum+=arr[j];
            if(i<half) left--, right++;
            else left++, right--;
        }
        cout<<"#"<<a<<" "<<sum<<endl; sum=0;
    }
    return 0;
}