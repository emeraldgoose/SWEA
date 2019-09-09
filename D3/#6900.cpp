// 6900. 주혁이의 복권 당첨
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int testCase=1, a;
    //cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int N, M, res=0;
        cin>>N>>M;
        // 동적할당
        char **lotto = new char*[N];
        int *amount = new int [N];
        for(int i=0;i<N;++i) lotto[i] = new char[8];
        // input & calc
        for(int i=0;i<N;i++) cin>>lotto[i]>>amount[i];
        string numbers;
        for(int i=0;i<M;i++) {
            cin>>numbers;
            for(int j=0;j<N;j++) {
                int flag=1;
                for(int k=0;k<8;k++) {
                    if(lotto[j][k]=='*') continue;
                    else {
                        if(lotto[j][k]!=numbers[k]) {
                            flag=0; break;
                        }
                    }
                }
                if(flag==1) res+=amount[j];
            }
        }
        // output
        cout<<"#"<<a<<" "<<res<<endl;
        // 동적할당 해제
        for(int i=0;i<N;++i) delete[] lotto[i];
        delete[] lotto; delete[] amount;
    }
    return 0;
}