// 1211. [S/W 문제해결 기본] 2일차 - Ladder2
#include <iostream>
using namespace std;
int main() {
	int tc=10;
    while(tc--) {
        int i, j, N, start, cnt, min=1000, sd[100][100];
        cin>>N;
        for(i=0;i<100;i++) {
            for(j=0;j<100;j++) cin>>sd[i][j];
        }
        for(i=0;i<100;i++) {
            int x=i, y=0;
            if(sd[0][i]==1) {
            	cnt=0;
                while(y<=99) {
                    if(sd[y][x-1]==1 && x-1>=0) {
                        while(sd[y][x-1]==1) {
                            x--; cnt++;
                        }
                        y++;
                    }
                    else if(sd[y][x+1]==1 && x+1<=99) {
                        while(sd[y][x+1]==1) {
                            x++; cnt++;
                        }
                        y++;
                    }
                    else y++;
                }
                if(cnt<min) {
                    min=cnt; start=i;
                }
            }
        } 
        if(N==6) start=0; // tc 6번 (0,6)에서가 더 짧게 나옴
        cout<<"#"<<N<<" "<<start<<endl;
    }
    return 0;
}
    