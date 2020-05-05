// 1953. [모의 SW 역량테스트] 탈주범 검거
#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int N, M, R, C, L;
int map[50][50];
int dx[]={-1,1,0,0}; // 0: N, 1: S, 2: W, 3: E
int dy[]={0,0,-1,1};
queue< pair<int,int> > q;
int visit[50][50];
bool check(int x,int y,int dir) {
    int type=map[x+dx[dir]][y+dy[dir]];
    if(type==0) return 0;
    if(map[x][y]==1) {
        if(dir==0 && (type==3 || type==4 || type==7)) return 0;
        else if(dir==1 && (type==3 || type==5 || type==6)) return 0;
        else if(dir==2 && (type==2 || type==6 || type==7)) return 0;
        else if(dir==3 && (type==2 || type==4 || type==5)) return 0;
    }
    else if(map[x][y]==2) {
        if(dir==2 || dir==3) return 0;
        else if(dir==0 && (type==3 || type==4 || type==7)) return 0;
        else if(dir==1 && (type==3 || type==5 || type==6)) return 0;
    }
    else if(map[x][y]==3) {
        if(dir==0 || dir==1) return 0;
        else if(dir==2 && (type==2 || type==6 || type==7)) return 0;
        else if(dir==3 && (type==2 || type==4 || type==5)) return 0;   
    }
    else if(map[x][y]==4) {
        if(dir==1 || dir==2) return 0;
        else if(dir==0 && (type==3 || type==4 || type==7)) return 0;
        else if(dir==3 && (type==2 || type==4 || type==5)) return 0;
    }
    else if(map[x][y]==5) {
        if(dir==0 || dir==2) return 0;
        else if(dir==1 && (type==3 || type==5 || type==6)) return 0;
        else if(dir==3 && (type==2 || type==4 || type==5)) return 0;
    }
    else if(map[x][y]==6) {
        if(dir==0 || dir==3) return 0;
        else if(dir==1 && (type==3 || type==5 || type==6)) return 0;
        else if(dir==2 && (type==2 || type==6 || type==7)) return 0;
    }
    else if(map[x][y]==7) {
        if(dir==1 || dir==3) return 0;
        else if(dir==0 && (type==3 || type==4 || type==7)) return 0;
        else if(dir==2 && (type==2 || type==6 || type==7)) return 0;
    }
    return 1;
}
void bfs(int x,int y) {
    q.push(make_pair(x,y));
    visit[x][y]=0;
    while(!q.empty()) {
        int x=q.front().first;
        int y=q.front().second;
        if(visit[x][y]==L) break;
        q.pop();
        for(int k=0;k<4;k++) {
            if(!check(x,y,k)) continue;
            int nx=x+dx[k], ny=y+dy[k];
            if(nx>=0 && nx<N && ny>=0 && ny<M && visit[nx][ny]==21) {
                q.push(make_pair(nx,ny)); visit[nx][ny]=visit[x][y]+1;
            }
        }
    }
}
void solve(int tc) {
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) visit[i][j]=21;
    }
    while(!q.empty()) q.pop();
    bfs(R,C);
    int ans=0;
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) {
            if(visit[i][j]<L) ans++;
        }
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
        cin>>N>>M>>R>>C>>L;
        for(int i=0;i<N;i++) {
            for(int j=0;j<M;j++) cin>>map[i][j];
        }
        solve(tc);
    }
    return 0;
}