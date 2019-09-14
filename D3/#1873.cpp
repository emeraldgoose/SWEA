#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int testCase, a;
    scanf("%d",&testCase);
    for(a=1;a<=testCase;a++) {
        int N, H, W;
        scanf("%d %d",&H,&W); // Height, Width
        char **field = new char*[H];
        for(int i=0;i<H;i++) field[i] = new char[W];
        // input
        for(int i=0;i<H;i++) scanf("%s",field[i]);
        // user search
        int ux, uy;
        for(int i=0;i<H;i++) {
            for(int j=0;j<W;j++) {
                if(field[i][j]=='<' || field[i][j]=='>' || field[i][j]=='^' || field[i][j]=='v') {
                    ux=i, uy=j;
                }
            }
        }
        // play game
        scanf("%d",&N);
        string ch;
        cin>>ch;
        for(int i=0;i<N;i++) {
            if(ch[i]=='U') {
                ux--;
                if(ux<0 || ux>(H-1) || uy<0 || uy>(W-1) || field[ux][uy]!='.') {
                    ux++; field[ux][uy]='^'; continue;
                }
                else {
                    field[ux][uy]='^'; field[ux+1][uy]='.';
                }
            }
            else if(ch[i]=='D') {
                ux++;
                if(ux<0 || ux>(H-1) || uy<0 || uy>(W-1) || field[ux][uy]!='.') {
                    ux--; field[ux][uy]='v'; continue;
                }
                else {
                    field[ux][uy]='v'; field[ux-1][uy]='.';
                }
            }
            else if(ch[i]=='L') {
                uy--;
                if(ux<0 || ux>(H-1) || uy<0 || uy>(W-1) || field[ux][uy]!='.') {
                    uy++; field[ux][uy]='<';continue;
                }
                else {
                    field[ux][uy]='<'; field[ux][uy+1]='.';
                }
            }
            else if(ch[i]=='R') {
                uy++;
                if(ux<0 || ux>(H-1) || uy<0 || uy>(W-1) || field[ux][uy]!='.') {
                    uy--; field[ux][uy]='>'; continue;
                }
                else {
                    field[ux][uy]='>'; field[ux][uy-1]='.';
                }
            }
            else { // ch=='S'
                if(field[ux][uy]=='^') {
                    for(int i=ux;i>=0;--i) {
                        if(field[i][uy]=='#') break;
                        else if(field[i][uy]=='*') {
                            field[i][uy]='.'; break;
                        }
                        else continue;
                    }
                }
                else if(field[ux][uy]=='v') {
                    for(int i=ux;i<H;i++) {
                        if(field[i][uy]=='#') break;
                        else if(field[i][uy]=='*') {
                            field[i][uy]='.'; break;
                        }
                        else continue;
                    }
                }
                else if(field[ux][uy]=='<') {
                    for(int i=uy;i>=0;--i) {
                        if(field[ux][i]=='#') break;
                        else if(field[ux][i]=='*') {
                            field[ux][i]='.'; break;
                        }
                        else continue;
                    }
                }
                else { // field[ux][uy]=='>'
                    for(int i=uy;i<W;i++) {
                        if(field[ux][i]=='#') break;
                        else if(field[ux][i]=='*') {
                            field[ux][i]='.'; break;
                        }
                        else continue;
                    }
                }
            }
        }
        // output
        printf("#%d ",a);
        for(int i=0;i<H;i++) {
            for(int j=0;j<W;j++) printf("%c",field[i][j]);
            printf("\n");
        }
        // 동적할당 해제
        for(int i=0;i<H;i++) delete[] field[i];
        delete[] field;
    }
    return 0;
}