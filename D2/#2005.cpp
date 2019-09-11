// 2005. 파스칼의 삼각형
#include <cstdio>
int solve(int a, int b) {
    	if(a==0||b==0||a==b) return 1;
    	else return solve(a-1,b)+solve(a-1,b-1);
}
int main() {
    int testCase, i;
    scanf("%d",&testCase);
    for(i=1;i<=testCase;i++) {
        int j, k, n;
        scanf("%d",&n);
 		printf("#%d\n",i);
        for(j=0;j<n;j++) {
            for(k=0;k<=j;k++) printf("%d ",solve(j,k));
            printf("\n");
        }
    }
    return 0;
}