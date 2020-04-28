// 2117. [모의 SW 역량테스트] 홈 방범 서비스
#include <iostream>
#include <cstring>
using namespace std;
int N, M;
int map[20][20];
bool visit[20][20];
int max_home_cnt=0;
void calc(int x,int y) {
    int operation=0;
    for(int k=1;k<=21;k++) { // 마름모 크기는 20이상이 될 수 있다.
        int x1=x-k+1, x2=x+k-1;
        operation=k*k+(k-1)*(k-1); // 운영비용
        memset(visit,0,sizeof(visit));
        for(int a=0;a<k;a++) { // 마름모 생성
            for(int i=x1+a;i<=x2-a;i++) {
                if(i>=0 && i<N && y+a>=0 && y+a<N)
                    visit[i][y+a]=1;
            }
            for(int i=x1+a;i<=x2-a;i++) {
                if(i>=0 && i<N && y-a>=0 && y-a<N)
                    visit[i][y-a]=1;
            }
        }
        int home_cnt=0;
        for(int a=0;a<N;a++) {
            for(int b=0;b<N;b++) {
                if(visit[a][b]==1 && map[a][b]==1) home_cnt++;
            }
        }
        int profit=M*home_cnt-operation;
        if(profit>=0 && home_cnt>max_home_cnt) max_home_cnt=home_cnt;
    }
}
void solve() {
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) calc(i,j);
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
        // init
        memset(visit,0,sizeof(visit));
        memset(map,0,sizeof(map));
        max_home_cnt=0;
        // input
        cin>>N>>M;
        for(int i=0;i<N;i++) {
            for(int j=0;j<N;j++) cin>>map[i][j];
        }
        solve();
        cout<<'#'<<tc<<' '<<max_home_cnt<<'\n';
    }
    return 0;
}