// 1767. [SW Test 샘플문제] 프로세서 연결하기
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
int N;
int arr[12][12];
int map[12][12];
vector< pair<int,int> > process;
int dx[]={-1,0,1,0}; // 0: N, 1: E, 2: S, 3: W
int dy[]={0,1,0,-1};
bool visit[12];
int procCnt, len;
int ansProcCnt=0, ansLen=200;
bool check(int n, int dir) { // check
    int x=process[n].first;
    int y=process[n].second;
    int pos_x=x, pos_y=y;
    while(1) {
        pos_x+=dx[dir], pos_y+=dy[dir];
        if(pos_x<0 || pos_x>=N || pos_y<0 || pos_y>=N) break;
        if(map[pos_x][pos_y]) return false;
    }
    return true;
}
void draw(int n,int dir) { // record
    int x=process[n].first;
    int y=process[n].second;
    int pos_x=x, pos_y=y;
    map[x][y]=2; // core
    while(1) {
        pos_x+=dx[dir], pos_y+=dy[dir];
        if(pos_x<0 || pos_x>=N || pos_y<0 || pos_y>=N) break;
        map[pos_x][pos_y]=1; // circuit
    }
}
void clear(int n,int dir) {
    int x=process[n].first;
    int y=process[n].second;
    int pos_x=x, pos_y=y;
    while(1) {
        pos_x+=dx[dir], pos_y+=dy[dir];
        if(pos_x<0 || pos_x>=N || pos_y<0 || pos_y>=N) break;
        map[pos_x][pos_y]=0;
    }
}
int addLen(int x, int y, int dir) {
    int ret;
    if(dir==0) ret=x;
    else if(dir==1) ret=N-1-y;
    else if(dir==2) ret=N-1-x;
    else if(dir==3) ret=y;
    return ret;
}
void dfs(int cur,int d) {
    if(d==process.size()) {
        if(ansProcCnt<procCnt) ansProcCnt=procCnt, ansLen=len;
        else if(ansProcCnt==procCnt) ansLen=min(ansLen,len);
        return;
    }
    if(process.size()-d+procCnt<ansProcCnt) return; // <- 시간단축
    for(int k=0;k<4;k++) {
        int x=process[cur].first;
        int y=process[cur].second;
        if(check(cur,k)) {
            int addlength=addLen(x,y,k);
            procCnt++; len+=addlength;
            draw(cur,k);
            dfs(cur+1,d+1);
            clear(cur,k);
            procCnt--; len-=addlength;
        }
        else dfs(cur+1,d+1);
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
        ansProcCnt=0; ansLen=200;
        procCnt=0; len=0;
        process.clear();
        memset(map,0,sizeof(map));
        memset(arr,0,sizeof(arr));
        // input
        cin>>N;
        for(int i=0;i<N;i++) {
            for(int j=0;j<N;j++) {
                cin>>arr[i][j];
                if(arr[i][j]==1) {
                    if(i==0 || i==N-1 || j==0 || j==N-1) procCnt++;
                    else process.push_back(make_pair(i,j));
                    map[i][j]=2;
                }
            }
        }
        dfs(0,0);
        cout<<'#'<<tc<<' '<<ansLen<<endl;
    }
    return 0;
}