// 7732. 시간 개념
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int testCase, a, i;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int hour, min, sec, hour2, min2, sec2;
        scanf("%d:%d:%d",&hour,&min,&sec);
        scanf("%d:%d:%d",&hour2,&min2,&sec2);
        if(hour2==0&&min2==0&&sec2==0) hour2=24;
        if(sec>sec2) {
            sec2+=60, min2--;
        }
        if(min>min2) {
            min2+=60, hour2--;
        }
        hour=hour2-hour, min=min2-min, sec=sec2-sec;
        if(hour<0) hour+=24;
        printf("#%d ",a);
        if(hour<10) printf("0%d:",hour);
        else printf("%d:",hour);
		if(min<10) printf("0%d:",min);
        else printf("%d:",min);
        if(sec<10) printf("0%d",sec);
        else printf("%d",sec);
        printf("\n");
    }
    return 0;
}