// 5515. 2016년 요일 맞추기
#include <iostream>
using namespace std;
int main() {
    int testCase, a, i;
    cin>>testCase;
    int mon[12]={4,0,1,4,6,2,4,0,3,5,1,3};
    for(a=1;a<=testCase;a++) {
        int month, day, res;
        cin>>month>>day;
        if(day>0 && day<=8) res=day-1+mon[month-1];
        else if (day>8 && day<=15) res=day-8+mon[month-1];
        else if (day>15 && day<=22) res=day-15+mon[month-1];
        else if (day>22 && day<=29) res=day-22+mon[month-1];
        else res=day-29+mon[month-1];
        if(res>6) res-=7;
        cout<<"#"<<a<<" "<<res<<endl;
    }
    return 0;
}