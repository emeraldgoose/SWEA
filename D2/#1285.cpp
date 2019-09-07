// 1285. 아름이의 돌 던지기
#include <iostream>
using namespace std;
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int N, cnt=0, min=100001;
        cin>>N;
        int *lo = new int[N];
        for(int j=0;j<N;j++) {
            cin>>lo[j];
            if(lo[j]<0) lo[j]=lo[j]*(-1);
            if(lo[j]<min) min=lo[j];
        }
        for(int j=0;j<N;j++) {
            if(lo[j]==min) cnt+=1;
        }
        cout<<"#"<<a<<" "<<min<<" "<<cnt<<endl;
        delete[] lo;
    }
    return 0;
}