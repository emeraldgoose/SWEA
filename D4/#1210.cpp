// 1210. [S/W 문제해결 기본] 2일차 - Ladder1
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int tc;
    for(tc=1;tc<=10;tc++) {
		int i, j, x, N, sd[100][100];
        cin>>N;
        for(i=0;i<100;i++) {
			for(j=0;j<100;j++) cin>>sd[i][j];
        }
        for(i=0;i<100;i++) {
            if(sd[99][i]==2) x=i;
        } int y=99;
        while(y!=0) {
            if(sd[y][x-1]==1 && x-1>=0) {
                while(sd[y][x-1]==1) {
                    x--;
                }
                if(x<0) x=0;
                y--;
            }
            else if(sd[y][x+1]==1) {
                while(sd[y][x+1]==1) {
                    x++;
                }
                if(x>99) x=99;
                y--;
            }
            else y--;
        }
        cout<<"#"<<N<<" "<<x<<endl;
    }
    return 0;
}