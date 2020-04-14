#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int N, W, H;
int map[16][13];
int cpy_map[16][13];
vector<int> v;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
vector<int> ans;
void drop() {
    for(int w=1;w<=W;w++) {
        for(int h=H;h>=0;h--) {
            if(cpy_map[h][w]==0) {
                for(int idx=h-1;idx>=0;idx--) {
                    if(cpy_map[idx][w]!=0) {
                        cpy_map[h][w]=cpy_map[idx][w];
                        cpy_map[idx][w]=0;
                        break;
                    }
                }
            }
        }
    }
}
void popping(int x,int y) {
    queue< pair<int,int> > q;
    queue<int> number;
    q.push(make_pair(x,y));
    number.push(cpy_map[x][y]);
    cpy_map[x][y]=0;
    while(!q.empty()) {
        int x=q.front().first;
        int y=q.front().second;
        int len=number.front();
        q.pop(); number.pop();
        for(int j=0;j<4;j++) {
            for(int l=0;l<len;l++) {
                int nx=x+l*dx[j], ny=y+l*dy[j];
                if(nx>0 && nx<=H && ny>0 && ny<=W) {
                    if(cpy_map[nx][ny]==0) continue;
                    q.push(make_pair(nx,ny));
                    number.push(cpy_map[nx][ny]);
                    cpy_map[nx][ny]=0;
                }
            }
        }
    }
}
void play() {
    for(int k=0;k<v.size();k++) {
        int drop_target=v[k];
        for(int h=1;h<=H;h++) {
            if(cpy_map[h][drop_target]!=0) {
                popping(h,drop_target);
                break;
            }
        }
        drop();
    }
}
void calc() {
    int cnt=0;
    for(int w=1;w<=W;w++) {
        for(int h=1;h<=H;h++) {
            if(cpy_map[h][w]!=0) cnt++;
        }
    }
    ans.push_back(cnt);
}
void dfs(int d) {
    if(d==N) {
        memcpy(cpy_map,map,sizeof(map));
        play();
        calc();
        return;
    }
    for(int i=1;i<=W;i++) {
        v.push_back(i);
        dfs(d+1);
        v.pop_back();
    }
}
void init() {
    v.clear(); ans.clear();
    memset(map,0,sizeof(map));
    memset(cpy_map,0,sizeof(cpy_map));
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    freopen("input.txt","r",stdin);
    int T, tc=0;
    cin>>T;
    while(T--) {
        init();
        tc++;
        cin>>N>>W>>H;
        for(int i=1;i<=H;i++) {
            for(int j=1;j<=W;j++) cin>>map[i][j];
        }
        dfs(0);
        cout<<"#"<<tc<<" "<<*min_element(ans.begin(),ans.end())<<"\n";
    }
    return 0;
}
