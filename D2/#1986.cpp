// 1986. 지그재그 숫자
#include <cstdio>
int main() {
 	int testCase, i, j;
    scanf("%d",&testCase);
    for(i=1;i<=testCase;i++) {
        int num, b=1, sum=0;
    	scanf("%d",&num);
        for(j=1;j<=num;j++) {
            sum += j*b; b = b*(-1);
        }
        printf("#%d %d\n",i,sum);
    }
    return 0;
}