// 1948. 날짜 계산기
#include <cstdio>
int main() {
    int testCase, a;
    int month[2], day[2], days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d",&testCase);
    for(a=1;a<=testCase;a++) {
        int result=0;
        scanf("%d %d %d %d",&month[0],&day[0],&month[1],&day[1]);
        if(month[0]==month[1]) result=day[1]-day[0]+1;
        else
        {
            month[0] -= 1, month[1] -= 1;
            for(int i=0;i<12;i++) {
                if(month[0]<i && month[1]>i) result+=days[i];
            }
            result += (days[month[0]]-day[0]+1) + day[1];
        }
        printf("#%d %d\n",a,result);
    }
    return 0;
}