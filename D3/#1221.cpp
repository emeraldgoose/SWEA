// 1221. [S/W 문제해결 기본] 5일차 - GNS
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
    int testCase, a, i;
    cin>>testCase; cin.ignore(1,'\n');
    for(a=1;a<=testCase;a++) {
        int th2, n; char th1, ch[3];
        cin>>th1>>th2>>n;
        int *arr = new int[n];
        for(i=0;i<n;i++) {
            cin>>ch;
            if(ch[0]=='Z'&&ch[1]=='R'&&ch[2]=='O') arr[i]=0;
            else if(ch[0]=='O'&&ch[1]=='N'&&ch[2]=='E') arr[i]=1;
            else if(ch[0]=='T') {
                if(ch[1]=='W' && ch[2]=='O') arr[i]=2;
                else arr[i]=3;
            }
            else if(ch[0]=='F') {
                if(ch[1]=='O' && ch[2]=='R') arr[i]=4;
                else arr[i]=5;
            }
            else if(ch[0]=='S') {
                if(ch[1]=='I' && ch[2]=='X') arr[i]=6;
                else arr[i]=7;
            }
            else if(ch[0]=='E'&&ch[1]=='G'&&ch[2]=='T') arr[i]=8;
            else arr[i]=9;
        } 
        sort(arr,arr+n);
        printf("#%d\n",a);
		for(i=0;i<n;i++) {
            if(arr[i]==0) printf("ZRO ");
            else if(arr[i]==1) printf("ONE ");
            else if(arr[i]==2) printf("TWO ");
            else if(arr[i]==3) printf("THR ");
            else if(arr[i]==4) printf("FOR ");
            else if(arr[i]==5) printf("FIV ");
            else if(arr[i]==6) printf("SIX ");
            else if(arr[i]==7) printf("SVN ");
            else if(arr[i]==8) printf("EGT ");
            else printf("NIN ");
        }
    }

    return 0;
}