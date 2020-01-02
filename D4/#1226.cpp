// 1226. [S/W 문제해결 기본] 7일차 - 미로1
// https://charm-charm.postype.com/post/3069809
#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
#define MAX 16
using namespace std;

int map[MAX][MAX];
bool visit[MAX][MAX];
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
queue< pair<int,int> > q;

int bfs(int x, int y) {
    q.push(make_pair(x,y));
    while(!q.empty()) {
        int a = q.front().first;
        int b = q.front().second;
        q.pop();
        visit[a][b]=true;
        for(int i=0;i<4;i++) {
            int na = a + dx[i];
            int nb = b + dy[i];
            if(na<0 || nb<0 || na>=16 || nb>=16) continue;
            if(!visit[na][nb] && !map[na][nb]) q.push(make_pair(na,nb));
            else if(map[na][nb]==3) return 1;
        }
    }
    return 0;
}

int main() {
    int t=10;
    while(t--) {
        int tc;
        cin>>tc;
        memset(map,0,sizeof(map));
        memset(visit,false,sizeof(visit));
        while(!q.empty()) q.pop();
        for(int i=0;i<16;i++) {
            for(int j=0;j<16;j++) scanf("%1d",&map[i][j]);
        }
        cout<<"#"<<tc<<" "<<bfs(1,1)<<endl;
    }
    return 0;
}