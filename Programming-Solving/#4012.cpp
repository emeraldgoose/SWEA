// 4012. [모의 SW 역량테스트] 요리사
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N;
int map[16][16];
int visit[16];
vector<int> A;
vector<int> B;
int ans;
void calc() {
    int sum_A=0, sum_B=0;
    for(int k=0;k<A.size();k++) {
        for(int l=0;l<A.size();l++) {
            sum_A+=map[A[k]][A[l]];
        }
    }
    for(int k=0;k<B.size();k++) {
        for(int l=0;l<B.size();l++) sum_B+=map[B[k]][B[l]];
    }
    ans=min(ans,abs(sum_A-sum_B));
}
void dfs(int cur,int d) {
    if(d==N/2) {
        B.clear();
        for(int k=0;k<N;k++) {
            if(!visit[k]) B.push_back(k);
        }
        calc();
    }
    for(int i=cur;i<N;i++) {
        if(visit[i]) continue;
        visit[i]=1;
        A.push_back(i);
        dfs(i,d+1);
        A.pop_back();
        visit[i]=0;
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
        A.clear();
        ans=10000000;
        // input
        cin>>N;
        for(int i=0;i<N;i++) {
            for(int j=0;j<N;j++) cin>>map[i][j];
        }
        dfs(0,0);
        cout<<'#'<<tc<<' '<<ans<<'\n';
    }
    return 0;
}