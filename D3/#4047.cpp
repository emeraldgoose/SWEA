// 4047. 영준이의 카드 카운팅
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        string str;
        cin>>str;
        int i, tmp, flag=0, space[13], dia[13], clova[13], heart[13];
        memset(space,0,13*sizeof(int)); memset(dia,0,13*sizeof(int)); memset(clova,0,13*sizeof(int)); memset(heart,0,13*sizeof(int));
        for(i=0;i<str.length()/3;i++) {
            tmp=((str.at(3*i+1)-48)*10)+str.at(3*i+2)-48;
            if(str.at(3*i)=='S') space[tmp-1]++;
            else if(str.at(3*i)=='H') heart[tmp-1]++;
            else if(str.at(3*i)=='D') dia[tmp-1]++;
            else clova[tmp-1]++;
        } int cnt_s=0, cnt_d=0, cnt_h=0, cnt_c=0;
        for(i=0;i<13;i++) {
            if(space[i]==1) cnt_s++;
            if(dia[i]==1) cnt_d++;
            if(heart[i]==1) cnt_h++;
            if(clova[i]==1) cnt_c++;
            if(space[i]>1 || dia[i]>1 || clova[i]>1 || heart[i]>1) {
                flag=1; break;
            }
        }
        cout<<"#"<<a<<" ";
        if(flag==1) cout<<"ERROR"<<endl;
        else cout<<13-cnt_s<<" "<<13-cnt_d<<" "<<13-cnt_h<<" "<<13-cnt_c<<endl;
    }
    return 0;
}