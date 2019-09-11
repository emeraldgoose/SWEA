// 2001. 파리 퇴치
#include <cstdio>
int main() {
    int testCase, i;
    scanf("%d",&testCase);
    for(i=1;i<=testCase;i++) {
        int j, k, n, m;
        int max=0, sum=0, flag1=0, flag2=0;
        scanf("%d %d",&n,&m);
        int arr[15][15];
        for(j=0;j<n;j++) {
            for(k=0;k<n;k++) scanf("%d",&arr[j][k]);
        }
        while(1) {
            if(flag2==n-m+1) break;
            for(j=0;j<m;j++) {
                for(k=0;k<m;k++) {
                    sum+=arr[j+flag1][k+flag2];
                }
            }
            if(sum>max) max=sum;
            flag1+=1;
            if(flag1>n-m) {
                flag1=0; flag2+=1;
            }
            sum = 0;
        }
        printf("#%d %d\n", i, max);
    }
    return 0;
}