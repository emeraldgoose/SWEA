// 5648. [모의 SW 역량테스트] 원자 소멸 시뮬레이션
// 모의 SW 역량테스트 해설
#include <iostream>
#include <cstring>
using namespace std;
int N;
struct atom{
    int x, y;
    int dir;
    int K;
    int death;
} atom[1001];
int map[4001][4001]; // 원자가 모인 개수
bool collide[4001][4001];
int dx[]={0,0,-1,1}; // up, down, left, right
int dy[]={1,-1,0,0};
int ans;
int cnt_alive;
int alive[1001]; // 살아았는 원자 번호
void check_alive() {
    int idx=0;
    cnt_alive=0;
    memset(alive,0,sizeof(alive));
    for(int i=1;i<=N;i++) {
        if(atom[i].death==0) alive[idx++]=i, cnt_alive++;
    }
}
void simul() {
    for(int i=0;i<cnt_alive;i++) {
        int n=alive[i];
        int x=atom[n].x, y=atom[n].y;
        map[x][y]--;
        x+=dx[atom[n].dir], y+=dy[atom[n].dir];
        if(x<0 || x>=4000 || y<0 || y>=4000) atom[n].death=1;
        else {
            atom[n].x=x, atom[n].y=y;
            map[x][y]++;
            if(map[x][y]>1) collide[x][y]=1;
        }
    }
    for(int i=0;i<cnt_alive;i++) {
        int n=alive[i];
        int x=atom[n].x, y=atom[n].y;
        if(collide[x][y]) {
            ans+=atom[n].K; map[x][y]--; atom[n].death=1;
            if(map[x][y]==0) collide[x][y]=0;
        }
    }
}
void solve(int tc) {
    int time=0;
    ans=0;
    while(time<=4002) {
        check_alive();
        if(cnt_alive==0) break;
        simul();
        time++;
    }
    cout<<'#'<<tc<<' '<<ans<<'\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    freopen("input.txt","r",stdin);
    int T, tc=0;
    cin>>T;
    while(T--) {
        tc++;
        cin>>N;
        for(int i=1;i<=N;i++) {
            int x, y;
            cin>>x>>y>>atom[i].dir>>atom[i].K;
            atom[i].death=0;
            x+=1000, y+=1000; x*=2, y*=2;
            atom[i].x=x, atom[i].y=y;
            map[x][y]++;
        }
        solve(tc);
    }
    return 0;
}