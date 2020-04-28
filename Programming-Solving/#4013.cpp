// 4013. [모의 SW 역량테스트] 특이한 자석
#include <iostream>
using namespace std;
int K;
int order_num, order_dir;
int magnetic[5][8]; // 0: N, 1: S
void rotation(int n, int dir) { // 1: CW, -1: CCW
    if(dir==1) {
        int tmp=magnetic[n][7];
        for(int k=7;k>=0;k--) magnetic[n][k]=magnetic[n][k-1];
        magnetic[n][0]=tmp;
    }
    else {
        int tmp=magnetic[n][0];
        for(int k=0;k<8;k++) magnetic[n][k]=magnetic[n][k+1];
        magnetic[n][7]=tmp;
    }
}
void solve(int n,int dir) {
    int arr[5]={0,0,0,0,0};
    arr[n]=dir;
    for(int k=n;k>1;k--) {
        if(magnetic[k-1][2]!=magnetic[k][6]) arr[k-1]=arr[k]*-1;
        else break;
    }
    for(int k=n;k<4;k++) {
        if(magnetic[k][2]!=magnetic[k+1][6]) arr[k+1]=arr[k]*-1;
        else break;
    }
    for(int k=1;k<5;k++) {
        int direction=arr[k];
        if(arr[k]) rotation(k,direction);
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    freopen("input.txt","r",stdin);
    int T, tc=0;
    cin>>T;
    while(T--) {
        tc++;
        cin>>K;
        for(int i=1;i<=4;i++) {
            for(int j=0;j<8;j++) cin>>magnetic[i][j];
        }
        for(int i=0;i<K;i++) {
            cin>>order_num>>order_dir;
            solve(order_num,order_dir);
        }
        cout<<'#'<<tc<<' '<<magnetic[1][0]+magnetic[2][0]*2+magnetic[3][0]*4+magnetic[4][0]*8<<'\n';
    }
    return 0;
}
