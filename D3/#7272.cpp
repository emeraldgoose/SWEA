// 7272. 안경이 없어!
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
void transfer(char arr[], int leng) {
    int k;
    for(k=0;k<leng;k++) {
        if(arr[k]=='A'||arr[k]=='D'||arr[k]=='O'||arr[k]=='P'||arr[k]=='Q'||arr[k]=='R') arr[k]='A';
        else if(arr[k]=='B') arr[k]='B';
        else arr[k]='C';
    }
}
int main() {
    int testCase, a, i;
    cin>>testCase; cin.ignore(1,'\n');
    for(a=1;a<=testCase;a++) {
        char ch1[10], ch2[10];
        cin>>ch1; cin>>ch2;
        int len1=strlen(ch1), len2=strlen(ch2);
        // 미리 정해둔 문자로 변환
        transfer(ch1,len1); transfer(ch2,len2);
        int cnt=0;
        if(len1!=len2) printf("#%d DIFF\n",a);
        else {
            for(i=0;i<len1;i++) {
                if(ch1[i]==ch2[i]) cnt++;
            }
        	if(len1==cnt) printf("#%d SAME\n",a);
            else printf("#%d DIFF\n",a);
        }
    }
    return 0;
}