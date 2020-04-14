// 1954. 달팽이 숫자
#include <iostream>
#include <cstring>
using namespace std;
int N;
int map[10][10];
int dr[]={1,0,-1,0};
int dc[]={0,1,0,-1};
void draw() {
    int num=0, dir=0;
    int pos_r=0, pos_c=0;
    while(1) {
        num++;
        map[pos_c][pos_r]=num;
        pos_r+=dr[dir];
        pos_c+=dc[dir];
        if(pos_r+dr[dir]<0 || pos_r+dr[dir]==N || pos_c+dc[dir]<0 || pos_c+dc[dir]==N)
            dir=dir+1>3 ? 0 : dir+1;
        else if(map[pos_c+dc[dir]][pos_r+dr[dir]])
            dir=dir+1>3 ? 0 : dir+1;
        if(num==N*N) break;
    }
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) cout<<map[i][j]<<' ';
        cout<<endl;
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int T, tc=0;
    cin>>T;
    while(T--) {
        memset(map,0,sizeof(map));
        tc++;
        cin>>N;
        cout<<"#"<<tc<<'\n';
        draw();
    }
    return 0;
}