// 5644. [모의 SW 역량테스트] 무선 충전
// [모의 SW 역량테스트 해설] 무선 충전
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
int M, A;
int map[11][11];    // start: (1,1)
int dx[]={0,0,1,0,-1}; // 0: stop, 1: up, 2: right, 3: down, 4: left
int dy[]={0,-1,0,1,0};
vector<int> pA, pB;
vector< pair<int,int> > bc; // x, y
vector< pair<int,int> > bc_info; // size, power
pair<int,int> user[2];
int bc_visit[9];
int ret;
bool check(int N,int n) { // user, ap
    int dist=abs(user[N].first-bc[n].first)+abs(user[N].second-bc[n].second);
    if(dist<=bc_info[n].first) return true;
    return false;
}
void dfs(int user, int d) { // user 수, d: 현재까지 다운로드한 데이터 양
    if(user==2) {
        ret=max(ret,d);
        return;
    }
    for(int i=1;i<=A;i++) {
        if(!bc_visit[i] && check(user,i)) {
            bc_visit[i]=1;
            dfs(user+1,d+bc_info[i].second);
            bc_visit[i]=0;
        }
    }
    dfs(user+1,d); // 현재 사용자가 ap를 사용하지 않는 경우
}
int count() {
    ret=0;
    dfs(0,0);
    return ret;
}
void solve(int tc) {
    int total=0;
    total+=count();    
    for(int i=0;i<M;i++) {
        int dir_A=pA[i], dir_B=pB[i];
        user[0].first+=dx[dir_A], user[0].second+=dy[dir_A];
        user[1].first+=dx[dir_B], user[1].second+=dy[dir_B];
        total+=count();
    }
    cout<<'#'<<tc<<' '<<total<<'\n';
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
        pA.clear(); pB.clear();
        bc.clear(); bc_info.clear();
        memset(bc_visit,0,sizeof(bc_visit));
        // input
        cin>>M>>A;
        for(int i=0;i<M;i++) {
            int tmp; cin>>tmp; pA.push_back(tmp);
        }
        for(int i=0;i<M;i++) {
            int tmp; cin>>tmp; pB.push_back(tmp);
        }
        bc.push_back(make_pair(0,0));
        bc_info.push_back(make_pair(0,0));
        for(int i=1;i<=A;i++) {
            int x,y,size,p; cin>>x>>y>>size>>p;
            bc.push_back(make_pair(x,y));
            bc_info.push_back(make_pair(size,p));
        }
        user[0].first=user[0].second=1;
        user[1].first=user[1].second=10;
        solve(tc);
    }
    return 0;
}