// 7829. 보물왕 태혁
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int testCase, a, i;
    scanf("%d",&testCase);
    for(a=1;a<=testCase;a++) {
        int n, min=1000000, max=0;
        scanf("%d",&n);
        int *arr = new int[n];
        for(i=0;i<n;i++) scanf("%d",&arr[i]);
        for(i=0;i<n;i++) {
            if(min>arr[i]) min=arr[i];
            if(arr[i]>max) max=arr[i];
        }
        cout<<"#"<<a<<" "<<min*max<<endl; delete[] arr;
    }
    return 0;
}