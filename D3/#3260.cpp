// 3260. 두 수의 덧셈
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int testCase,a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        string p, q;
        cin>>p>>q;
        if(q.length()>p.length()) swap(q, p);
        int diff=p.length()-q.length();
        int *num1 = new int[p.length()]; // long num
        int *num2 = new int[q.length()]; // short num
        for(int i=0;i<p.length();i++) num1[i]=p[i]-'0';
        for(int i=0;i<q.length();i++) num2[i]=q[i]-'0';
        // calc
        int upr=0, tmp;
        for(int i=p.length()-1;i>=0;--i) {
            if((i-diff)>=0) tmp = num1[i]+num2[i-diff]+upr;
            else tmp = num1[i]+upr;
            if(tmp>9) {
                upr=1; tmp-=10;
            }
            else upr=0;
            num1[i]=tmp;
        }
        // output
        cout<<"#"<<a<<" ";
        if(upr==1) cout<<"1";
        for(int i=0;i<p.length();i++) cout<<num1[i];
        cout<<'\n';
        delete[] num1; delete[] num2;
    }
    return 0;
}