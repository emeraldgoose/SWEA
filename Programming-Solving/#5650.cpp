// 5650. [모의 SW 역량테스트] 핀볼 게임
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
int N;
int map[100][100];
int dx[]={-1,0,1,0}; // 0: N, 1: E, 2: S, 3: W
int dy[]={0,1,0,-1};
vector< pair<int,int> > wormhole[11];
int ans=0;
void play(int x,int y,int d) {
    int pos_x=x, pos_y=y;
    int dir=d;
    int score=0;
    while(1) {
        pos_x+=dx[dir], pos_y+=dy[dir];
        if((pos_x==x && pos_y==y) || map[pos_x][pos_y]==-1) break; // end
        if(map[pos_x][pos_y]>=1 && map[pos_x][pos_y]<=5) {
            score++;
            int block=map[pos_x][pos_y];
            if(block==1) {
                if(dir==0 || dir==1) dir=dir+2>3 ? dir-2 : dir+2; // reflect
                else if(dir==2) dir=1;
                else if(dir==3) dir=0;
            }
            else if(block==2) {
                if(dir==1 || dir==2) dir=dir+2>3 ? dir-2 : dir+2;
                else if(dir==0) dir=1;
                else if(dir==3) dir=2;
            }
            else if(block==3) {
                if(dir==2 || dir==3) dir=dir+2>3 ? dir-2 : dir+2;
                else if(dir==1) dir=2;
                else if(dir==0) dir=3;
            }
            else if(block==4) {
                if(dir==0 || dir==3) dir=dir+2>3 ? dir-2 : dir+2;
                else if(dir==2) dir=3;
                else if(dir==1) dir=0;
            }
            else if(block==5) dir=dir+2>3 ? dir-2 : dir+2;
        }
        else if(pos_x<0 || pos_x>=N || pos_y<0 || pos_y>=N) score++, dir=dir+2>3 ? dir-2 : dir+2; // reflect
        else if(map[pos_x][pos_y]>=6 && map[pos_x][pos_y]<=10) { // wormhole
            for(int i=0;i<2;i++) {
                int wh_x=wormhole[map[pos_x][pos_y]][i].first;
                int wh_y=wormhole[map[pos_x][pos_y]][i].second;
                if(wh_x!=pos_x || wh_y!=pos_y) {
                    pos_x=wh_x, pos_y=wh_y;
                    break;
                }
            }
        }
    }
    ans=max(ans,score);
}
void solve() {
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            for(int k=0;k<4;k++) {
                if(map[i][j]==0) play(i,j,k);
            }
        }
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
        memset(map,0,sizeof(map));
        ans=0;
        for(int i=0;i<11;i++) wormhole[i].clear();
        // input
        cin>>N;
        for(int i=0;i<N;i++) {
            for(int j=0;j<N;j++) {
                cin>>map[i][j];
                if(map[i][j]>=6 && map[i][j]<=10)
                    wormhole[map[i][j]].push_back(make_pair(i,j));
            }
        }
        solve();
        cout<<'#'<<tc<<' '<<ans<<'\n';
    }
    return 0;
}