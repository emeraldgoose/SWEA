// 1926. 간단한 369게임
#include <cstdio>
int main() {
    int N, i, flag=0;
    int tmp1, tmp2;
    scanf("%d", &N);
    for(i=1;i<=N;i++) {
        if(i<10) {
            if(i!=1) printf(" ");
            if((i%3)==0) printf("-");
            else printf("%d",i);
        }
        else if (i>9 && i<100) {
            tmp1 = i, tmp2 = i/10; printf(" ");
            if(tmp2==3 || tmp2==6 || tmp2==9) {printf("-"); flag += 1;}
            tmp1 -= tmp2*10;
            if(tmp1==3 || tmp1==6 || tmp1==9) {printf("-"); flag += 1;}
            if(flag == 0)   printf("%d",i);
        }
        else if (i>99) {
            tmp1=i, tmp2=i/100; printf(" ");
            if(tmp2==3 || tmp2==6 || tmp2==9) {printf("-"); flag += 1;}
            tmp1 -= tmp2*100; tmp2=tmp1/10;
            if(tmp2==3 || tmp2==6 || tmp2==9) {printf("-"); flag += 1;}
            tmp1 -= tmp2*10;
            if(tmp1==3 || tmp1==6 || tmp1==9) {printf("-"); flag += 1;}
            if(flag == 0)   printf("%d",i);
        }
        flag = 0;
    }
    return 0;
}