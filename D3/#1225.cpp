// 1225. [S/W 문제해결 기본] 7일차 - 암호생성기
#include <iostream>
using namespace std;
int main() {
    int testCase, a, i, j;
    for(a=1;a<=10;a++) {
        int arr[8]={0}, tmp[8]={0};
        cin>>testCase;
        for(i=0;i<8;i++) cin>>arr[i];
        int flag=0;
        while(1) {
            for(i=0;i<8;i++) {
                arr[i]-=15;
                if(arr[i]<20) flag=1;
            }
            if(flag==1) break;
        }
        while(arr[7]!=0) {
            for(i=1;i<=5;i++) {
                arr[0] -= i;
                if(arr[0]<=0) arr[0]=0;
                tmp[7]=arr[0];
                for(j=1;j<8;j++) tmp[j-1]=arr[j];
                for(j=0;j<8;j++) arr[j]=tmp[j];
                if(arr[7]==0) break;
            }
        }
        cout<<"#"<<testCase<<" ";
        for(i=0;i<8;i++) cout<<arr[i]<<" ";
        cout<<'\n';
    }
    return 0;
}