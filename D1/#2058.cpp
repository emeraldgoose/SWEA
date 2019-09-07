// 2058. 자릿수 더하기
#include <cstdio>
int main() {
    int num[4]={0}, sum=0;
    for(int i=0;i<4;i++) {
        scanf("%1d",&num[i]); sum+=num[i];
    }
    printf("%d\n",sum);
    return 0;
}
