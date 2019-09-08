// 7532. 세영이의 SEM력 연도
#include <iostream>
using namespace std;
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int i=0, sun=0, earth=0, moon=0, ad=0, flag_e=0, flag_m=0;
        cin>>sun>>earth>>moon;
        while(1) {
            ad=sun+365*i;
            if(ad>=earth) {
                if((ad-earth)%24==0) flag_e=1;
                else flag_e=0;    
            }
            if(ad>=earth) {
                if((ad-moon)%29==0) flag_m=1;
                else flag_m=0;
            }
            if(flag_e==1 && flag_m==1) break;
            i++;
        }
        cout<<"#"<<a<<" "<<ad<<endl;
    }
    return 0;
}