// 1961. 숫자 배열 회전
#include <iostream>
using namespace std;
int N;
int map[7][7];
int tmp[7][7];
int ans[7][7][3];
void rotate() {
    for(int k=0;k<3;k++) {
        for(int i=0;i<N;i++) { // 90
            for(int j=0;j<N;j++) tmp[j][N-i-1]=map[i][j];
        }
        for(int i=0;i<N;i++) {
            for(int j=0;j<N;j++) map[i][j]=tmp[i][j];
        }
        for(int i=0;i<N;i++) {
            for(int j=0;j<N;j++) ans[i][j][k]=map[i][j];
        }
    }
}
void solve(int tc) {
    rotate();
    cout<<'#'<<tc<<'\n';
    for(int i=0;i<N;i++) {
        for(int k=0;k<3;k++) {
            for(int j=0;j<N;j++) cout<<ans[i][j][k];
            cout<<' ';
        }
        cout<<'\n';
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
        cin>>N;
        for(int i=0;i<N;i++) {
            for(int j=0;j<N;j++) cin>>map[i][j];
        }
        solve(tc);
    }
    return 0;
}
