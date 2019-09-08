// 6781. 삼삼 트리플 게임
// 아래 코드는 테스트케이스를 모두 통과했지만 틀린 코드입니다.
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int num[10];
        char ch[10];
        for(int i=0;i<10;i++) scanf("%1d",&num[i]);
        for(int i=0;i<10;i++) scanf("%c",&ch[i]);
        int R[10]={0}, G[10]={0}, B[10]={0};
        for(int i=0;i<9;i++) {
            if(ch[i]=='R') R[num[i]]++;
            else if(ch[i]=='G') G[num[i]]++;
            else B[num[i]]++;
        }
        for(int i=1;i<8;i++) {
            while(R[i]>0 && R[i+1]>0 && R[i+2]>0) {
                R[i]--; R[i+1]--; R[i+2]--;
            }
            while(G[i]>0 && G[i+1]>0 && G[i+2]>0) {
                G[i]--; G[i+1]--; G[i+2]--;
            }
            while(B[i]>0 && B[i+1]>0 && B[i+2]>0) {
                B[i]--; B[i+1]--; B[i+2]--;
            }
        }
        for(int i=1;i<10;i++) {
            while(R[i]>2) R[i]-=3;
            while(G[i]>2) G[i]-=3;
            while(B[i]>2) B[i]-=3;
        }
        bool flag=true;
        for(int i=1;i<10;i++) {
            if(R[i]!=0 || G[i]!=0 || B[i]!=0) flag=false;
        }
        cout<<"#"<<a<<" ";
        if(flag) cout<<"Win"<<endl;
        else cout<<"Continue"<<endl;
    }
    return 0;
}