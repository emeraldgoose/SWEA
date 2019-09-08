// 8338. 계산기
#include <iostream>
#include <stdio.h>
int main() {
    int testCase, a, i;
    scanf("%d",&testCase);
    for(a=1;a<=testCase;a++) {
        int n, arr[9], sum=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        for(i=0;i<n;i++) {
            if(i==0 || sum==0 || sum==1) sum += arr[i];
            else {
                if(arr[i]==0 || arr[i]==1) sum+=arr[i];
                else sum*=arr[i];
            }
        }
        printf("#%d %d\n",a,sum);
    }
    return 0;
}