// 1233. [S/W 문제해결 기본] 9일차 - 사칙연산 유효성 검사
#include <iostream>
using namespace std;
int main() {
    int tc;
    for(tc=1;tc<=10;tc++) {
        int i, N, num, left, right;
        cin>>N;
        char *arr = new char[N+1];
        for(i=1;i<=N;i++) {
            if((N%2)==0) {
                cin>>num;
                if(i<(N/2)) cin>>arr[i]>>left>>right;
                else if(i==N/2) cin>>arr[i]>>left;
                else cin>>arr[i];
            }
            else {
                cin>>num;
                if(i<=(N/2)) cin>>arr[i]>>left>>right;
                else cin>>arr[i];
            }
        }     
        int flag=1;
        for(i=1;i<((N+1)/2);i++) {
            if(arr[i]>=48 && arr[i]<=57) flag=0;
        }
        for(i=((N+1)/2);i<=N;i++) {
            if(arr[i]=='+' || arr[i]=='-' || arr[i]=='*' || arr[i]=='/') flag=0;
        }
        cout<<"#"<<tc<<" "<<flag<<endl;
        
        delete[] arr;
    }
    return 0;
}