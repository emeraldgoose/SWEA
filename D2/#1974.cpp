// 1974. 스도쿠 검증
#include <cstdio>
int solve(int array[9][9]) {
    int a, b, result = 0, flag1,flag2,t=9;
    int sum1=0, sum2=0, sum3=0;
    for(a=0;a<9;a++) {
        for(b=0;b<9;b++) {
            sum1 += array[a][b];
            sum2 += array[b][a];
        }
        if(sum1 != 45 || sum2 != 45) result = 1;
        sum1=0,sum2=0;
    } flag1=0, flag2=0;
    while(t--) {
        for(a=0;a<3;a++) {
            for(b=0;b<3;b++) {
                sum3 += array[a+flag1][b+flag2];
            }
        }
        if(sum3 != 45) result = 1; sum3 = 0; flag1 += 3;
        if(flag1>6) {
            flag1=0; flag2 += 3;
        }
        if(flag2>6) break;
    }
    return result;
}
int main() {
    int testCase, i, j, k;
    int arr[9][9];
    scanf("%d",&testCase);
    for(i=1;i<=testCase;i++) {
        for(j=0;j<9;j++) {
            for(k=0;k<9;k++) scanf("%d",&arr[j][k]);
        }
        if(solve(arr) == 0) printf("#%d 1\n", i);
        else printf("#%d 0\n", i);
    }
    return 0;
}