// 1206. [S/W 문제해결 기본] 1일차 - View
#include <cstdio>
int main() {
    int testCase=10, i, j, k, cnt=0;
    int width;
    for(i=1;i<=testCase;i++) {
        scanf("%d",&width);
        int build[width];
        int n[width];
        for(j=0;j<width;j++) scanf("%d",&n[j]);
        for(j=0;j<255;j++) {
            for(k=0;k<width;k++) {
                if(n[k]!=0) {
                    build[k]=1;
            	    n[k] -= 1;
                }
                else build[k]=0;
            }
            for(k=0;k<width;k++) {
                if(build[k]==1) {
                    if(build[k-2]==0 && build[k-1]==0 && build[k+1]==0 && build[k+2]==0) cnt+=1;
                }
            }
        }
        printf("#%d %d\n",i,cnt); cnt=0;
    }
    return 0;
}
