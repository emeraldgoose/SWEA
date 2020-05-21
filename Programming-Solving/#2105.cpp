// 2105. [모의 SW 역량테스트] 디저트 카페
#include <iostream>
#include <cstring>
using namespace std;
int N;
int map[20][20];
bool check(int x,int y) {
    if(x<0 || x>=N || y<0 || y>=N) return false;
    return true;
}
bool simul(int x,int y,int len_a,int len_b) {
    int pos_x=x, pos_y=y;
    bool eat[101];
    memset(eat,0,sizeof(eat));
    eat[map[x][y]]=1;
    for(int k=0;k<len_a;k++) {
        pos_x+=1; pos_y+=1;
        if(check(pos_x,pos_y) && !eat[map[pos_x][pos_y]]) eat[map[pos_x][pos_y]]=1;
        else return 0;
    }
    for(int k=0;k<len_b;k++) {
        pos_x+=1; pos_y-=1;
        if(check(pos_x,pos_y) && !eat[map[pos_x][pos_y]]) eat[map[pos_x][pos_y]]=1;
        else return 0;
    }
    for(int k=0;k<len_a;k++) {
        pos_x-=1; pos_y-=1;
        if(check(pos_x,pos_y) && !eat[map[pos_x][pos_y]]) eat[map[pos_x][pos_y]]=1;
        else return 0;
    }
    for(int k=0;k<len_b;k++) {
        pos_x-=1; pos_y+=1;
        if(pos_x==x && pos_y==y) break;
        if(check(pos_x,pos_y) && !eat[map[pos_x][pos_y]]) eat[map[pos_x][pos_y]]=1;
        else return 0;
    }
    return 1;
}
void solve(int tc) {
    int ans=-1;
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            if((i==0 && j==0) || (i==N-1 && j==0) || (i==0 && j==N-1) || (i==N-1 && j==N-1)) continue;
            for(int len_a=1;len_a<=N;len_a++) {
                for(int len_b=1;len_b<=N;len_b++) {
                    int tmp=-1;
                    if(simul(i,j,len_a,len_b)) tmp=(len_a+len_b)*2;
                    if(tmp>ans) ans=tmp;
                }
            }
        }
    }
    cout<<'#'<<tc<<' '<<ans<<endl;
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
        for(int i=0;i<N;i++) {
            for(int j=0;j<N;j++) cin>>map[i][j];
        }
        solve(tc);
    }
    return 0;
}
