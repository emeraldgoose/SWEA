// 1240. [S/W 문제해결 응용] 1일차 - 단순 2진 암호코드
#include <iostream>
#include <cstring>
using namespace std;
int barcode[10][7]={{0,0,0,1,1,0,1},{0,0,1,1,0,0,1},{0,0,1,0,0,1,1},{0,1,1,1,1,0,1},{0,1,0,0,0,1,1},{0,1,1,0,0,0,1},{0,1,0,1,1,1,1},{0,1,1,1,0,1,1},{0,1,1,0,1,1,1},{0,0,0,1,0,1,1}};
int transfer(int s[]) {
    int k;
    for(k=0;k<10;k++) {
        bool flag=true;
        for(int l=0;l<7;l++) {
            if(barcode[k][l]!=s[l]) {
                flag=false; break;
            }
        }
        if(flag) {
            return k; break;
        }
    }
    return 0;
}
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int N, M;
        cin>>N>>M;
        string str;
        // input & extract
        int y, arr[56];
        for(int i=0;i<N;i++) {
            cin>>str;
            for(int j=M-1;j>=0;--j) {
                if(str[j]=='1') {
                   y=j; 
                   for(int j=0;j<56;j++) arr[j]=str[y-55+j]-'0';
                   break;
                }
            }
        }
        // transfer & check
        int code[8], tmp[7], calc=0;
        for(int i=0;i<8;i++) {
            for(int j=0;j<7;j++) tmp[j]=arr[7*i+j];
            code[i]=transfer(tmp);
        }
        int sum=(code[0]+code[2]+code[4]+code[6])*3+code[1]+code[3]+code[5]+code[7];
        if((sum%10)==0) {
            sum=0;
            for(int i=0;i<8;i++) sum+=code[i];
        }
        else sum=0;
        // output
        cout<<"#"<<a<<" "<<sum<<endl;
    }
    return 0;
}