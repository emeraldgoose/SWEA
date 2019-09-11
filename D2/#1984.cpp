// 1984. 중간 평균값 구하기
#include <cstdio>
#include <cmath>
int main() {
    int testCase, i;
    scanf("%d",&testCase);
    for(i=1;i<=testCase;i++) {
        int j, num[10];
        int max=0, min=100000, maxnum, minnum, sum=0;
        for(j=0;j<10;j++) {
            scanf("%d",&num[j]);
            if(num[j]>max) {
                max=num[j]; maxnum=j;
            }
            if(num[j] < min) {
                min=num[j]; minnum=j;
            }
        }
        for(j=0;j<10;j++) {
            if(j!=maxnum && j!=minnum) sum += num[j];
        }
        printf("#%d %d\n",i, (int)floor((double)sum/8 + 0.5));
    }
    return 0;
}