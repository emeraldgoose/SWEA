// 5603. [Professional] 건초더미
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int testCase,a;
    scanf("%d",&testCase);
    for(a=1;a<=testCase;a++) {
        int n, i, sum=0, tmp=0, cnt=0;
        scanf("%d",&n);
        int *arr = new int[n];
        for(i=0;i<n;i++) {
            scanf("%d",&arr[i]);
        	sum+=arr[i];
        }
        for(i=0;i<n;i++) {
            tmp=arr[i]-(sum/n);
            if(tmp>0) cnt+=tmp;
        }
        cout<<"#"<<a<<" "<<cnt<<endl;
        delete[] arr; arr=NULL;
    }
    return 0;
}