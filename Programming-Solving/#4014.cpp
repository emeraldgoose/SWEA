// 4014. [모의 SW 역량테스트] 활주로 건설
// backjoon
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int N, L;
int map[100][100];
int arr[100];
bool check() {
    bool visit[100]; // 경사로를 놓은 자리
    memset(visit,false,sizeof(visit));
    for(int i=1;i<N;i++) {
        if(arr[i-1]!=arr[i]) { // 인접한 칸의 높이가 다르면, 경사로를 놓아야 한다.
            if(abs(arr[i]-arr[i-1])>1) return false; // 높이 차는 1이어야 한다.
            if(arr[i-1]<arr[i]) {
                for(int j=1;j<=L;j++) { // 그 자리에서 경사로를 놓아본다.
                    if(i-j<0) return false; // 길이가 L이 안되는 경우
                    if(arr[i-1]!=arr[i-j]) return false; // 경사로가 평탄하지 않은 경우
                    if(visit[i-j]) return false; // 경사로가 이미 놓아져 있는 경우
                    visit[i-j]=true;
                }
            }
            else {
                for(int j=0;j<L;j++) {
                    if(i+j>=N) return false;
                    if(arr[i]!=arr[i+j]) return false;
                    if(visit[i+j]) return false;
                    visit[i+j]=true;
                }
            }
        }
    }
    return true;
}
void solve(int tc) {
    int ans=0;
    for(int i=0;i<N;i++) {
        // row
        for(int j=0;j<N;j++) arr[j]=map[i][j];
        if(check()) ans++;
        // col
        for(int j=0;j<N;j++) arr[j]=map[j][i];
        if(check()) ans++;
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
        cin>>N>>L;
        for(int i=0;i<N;i++) {
            for(int j=0;j<N;j++) cin>>map[i][j];
        }
        solve(tc);
    }
    return 0;
}
