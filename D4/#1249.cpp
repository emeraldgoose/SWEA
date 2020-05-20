// 1249. [S/W 문제해결 응용] 4일차 - 보급로
// https://2youngjae.tistory.com/82
#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;
int N;
int map[101][101];
int d[101][101]; // 거리 배열과 방문배열 둘다 사용해야 통과
bool visit[101][101]; // 거리 배열만 사용하면 100 X 100에서 시간초과
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
queue< pair<int,int> > q;
void bfs(int x,int y) {
    q.push(make_pair(x,y));
    d[x][y]=map[x][y];
    visit[x][y]=1;
    while(!q.empty()) {
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0;i<4;i++) {
            int nx=x+dx[i], ny=y+dy[i];
            if(nx>=0 && nx<N && ny>=0 && ny<N) {
                if(!visit[nx][ny] || d[nx][ny]>d[x][y]+map[nx][ny]) {
                    d[nx][ny]=d[x][y]+map[nx][ny];
                    q.push(make_pair(nx,ny));
                    visit[nx][ny]=1;
                }
            }
        }
    }
}
int main() {
    freopen("input.txt","r",stdin);
    int T, tc=0;
    cin>>T;
    while(T--) {
        tc++;
        cin>>N;
        memset(map,0,sizeof(map));
        memset(visit,0,sizeof(visit));
        memset(d,0,sizeof(d));
        for(int i=0;i<N;i++) {
            for(int j=0;j<N;j++) scanf("%1d",&map[i][j]);
        }
        bfs(0,0);
        printf("#%d %d\n",tc,d[N-1][N-1]);
    }
    return 0;
}
