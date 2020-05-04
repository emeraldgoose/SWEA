// 2112. [모의 SW 역량테스트] 보호 필름
// https://bit.ly/3bXfq1M
#include <iostream>
using namespace std;
int D,W,K;
int map[13][20];
int min_ans=13;
bool check() {
    for(int j=0;j<W;j++) {
        bool flag=false;
        for(int i=0;i<=D-K;i++) {
            int bf=map[i][j];
            int cnt=1;
            for(int k=1;k<K;k++) {
                if(bf==map[i+k][j]) cnt++;
            }
            if(cnt>=K) {
                flag=true; break;
            }   
        }
        if(!flag) return false;
    }
    return true;
}
void dfs(int cur,int d) {
    if(cur==D && min_ans>d) {
        if(check()) min_ans=d;
        return;
    }
    if(d>=min_ans || cur>=D) return;

    int row[20];
    for(int i=0;i<W;i++) row[i]=map[cur][i];

    dfs(cur+1,d);
    for(int w=0;w<W;w++) map[cur][w]=0;
    dfs(cur+1,d+1);
    for(int w=0;w<W;w++) map[cur][w]=1;
    dfs(cur+1,d+1);
    for(int w=0;w<W;w++) map[cur][w]=row[w];
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    freopen("input.txt","r",stdin);
    int T, tc=0;
    cin>>T;
    while(T--) {
        tc++;
        min_ans=13;
        cin>>D>>W>>K;
        for(int i=0;i<D;i++) {
            for(int j=0;j<W;j++) cin>>map[i][j];
        }
        if(K==1 || check()) min_ans=0;
        else dfs(0,0);
        cout<<'#'<<tc<<' '<<min_ans<<'\n';
    }
    return 0;
}