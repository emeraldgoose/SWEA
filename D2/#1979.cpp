// 1979. 어디에 단어가 들어갈 수 있을까
#include <iostream>
#include <cstring>
using namespace std;
int check(int s[], int len, int num) {
    int cnt=0, res=0;
    for(int p=0;p<len;p++) {
        if(s[p]==1) cnt++;
        else {
            if(cnt==num) res++; cnt=0;
        }
    }
    if(cnt==num) res++;
    return res;
}
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int N, K, ans=0;
        cin>>N>>K;
        int **arr = new int*[N];
        for(int i=0;i<N;i++) arr[i] = new int[N];
        // input
        for(int i=0;i<N;i++) {
            for(int j=0;j<N;j++) cin>>arr[i][j];
        }
        // calc
        int *tmp = new int [N];
        for(int i=0;i<N;i++) ans+=check(arr[i],N,K);
        for(int i=0;i<N;i++) {
            for(int j=0;j<N;j++) tmp[j]=arr[j][i];
            ans+=check(tmp,N,K);
        }
        // output
        cout<<"#"<<a<<" "<<ans<<endl;
        // 동적할당 해제
        for(int i=0;i<N;i++) delete[] arr[i]; delete[] arr; delete[] tmp;
    }
    return 0;
}