// 1211. [S/W 문제해결 기본] 2일차 - Ladder2
#include <iostream>
#include <cstring>
#define MAX 100
using namespace std;
int map[MAX][MAX];
int main() {
    int t=1;
    while(t--) {
        int tc;
        cin>>tc;
        memset(map,0,sizeof(map));
        for(int i=0;i<100;i++) {
            for(int j=0;j<100;j++) cin>>map[i][j];
        }
        int ans, min=500;
        for(int i=0;i<100;i++) {
            int x=0;
            if(map[x][i]) {
                int y=i;
                int cnt=0;
                while(x<99) {
                    if((y+1)<100 && map[x][y+1]) {
                        while((map[x][y+1]) && y<99) {
                            y++; cnt++;
                        }
                    }
                    else if((y-1)>=0 && map[x][y-1]) {
                        while((map[x][y-1]) && y>0) {
                            y--; cnt++;
                        }
                    }
                    x++;
                }
                if(cnt<min) {
                   min=cnt, ans=i;
                }
            }
        }
        cout<<"#"<<tc<<" "<<ans<<endl;
    }
    return 0;
}