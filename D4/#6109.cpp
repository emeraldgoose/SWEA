// 6109. 추억의 2048게임
#include <iostream>
#include <cstring>
using namespace std;
int N;
int map[20][20];
string str;
int arr[20]; // temp
void print() {
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) cout<<map[i][j]<<' ';
        cout<<'\n';
    }
}
void add(int type) {
    if(type==0) { // arr left
        for(int i=0;i<N;i++) {
            if(arr[i]!=0) {
                for(int j=i+1;j<N;j++) {
                    if(arr[j]==0) continue;
                    if(arr[j]==arr[i]) {
                        arr[i]*=2; arr[j]=0; break;
                    }
                    else break;
                }
            }
        }
    }
    else { // arr right
        for(int i=N-1;i>=0;i--) {
            if(arr[i]!=0) {
                for(int j=i-1;j>=0;j--) {
                    if(arr[j]==0) continue;
                    if(arr[j]==arr[i]) {
                        arr[i]*=2; arr[j]=0; break;
                    }
                    else break;
                }
            }
        }
    }
}
void swipe(int type) {
    if(type==0) { // arr left
        for(int i=0;i<N;i++) {
            if(arr[i]==0) {
                for(int j=i+1;j<N;j++) {
                    if(arr[j]) {
                        arr[i]=arr[j]; arr[j]=0; break;
                    }
                }
            }
        }
    }
    else { // arr right
        for(int i=N-1;i>=0;i--) {
            if(arr[i]==0) {
                for(int j=i-1;j>=0;j--) {
                    if(arr[j]) {
                        arr[i]=arr[j]; arr[j]=0; break;
                    }
                }
            }
        }
    }
}
void solve(int tc) {
    if(str=="up") {
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++) arr[j]=map[j][i];
            add(0);
            swipe(0);
            for(int j=0;j<N;j++) map[j][i]=arr[j];
        }
    }
    else if(str=="down") {
        for(int i=0;i<N;i++) {
            for(int j=0;j<N;j++) arr[j]=map[j][i];
            add(1);
            swipe(1);
            for(int j=0;j<N;j++) map[j][i]=arr[j];
        }
    }
    else if(str=="left") {
        for(int i=0;i<N;i++) {
            for(int j=0;j<N;j++) arr[j]=map[i][j];
            add(0);
            swipe(0);
            for(int j=0;j<N;j++) map[i][j]=arr[j];
        }
    }
    else { // right
        for(int i=0;i<N;i++) {
            for(int j=0;j<N;j++) arr[j]=map[i][j];
            add(1);
            swipe(1);
            for(int j=0;j<N;j++) map[i][j]=arr[j];
        }
    }
    cout<<'#'<<tc<<'\n';
    print();
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    freopen("input.txt","r",stdin);
    int T, tc=0;
    cin>>T;
    while(T--) {
        tc++;
        cin>>N>>str;
        for(int i=0;i<N;i++) {
            for(int j=0;j<N;j++) cin>>map[i][j];
        }
        solve(tc);
    }
    return 0;
}