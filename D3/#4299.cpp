// 4299. 태혁이의 사랑은 타이밍
#include <iostream>
using namespace std;
int main() {
    int testCase, a, i;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int day, hour, min, sum=0;
        cin>>day>>hour>>min;
        sum=((day-11)*24*60) + ((hour-11)*60) + (min-11);
        if(day<11) sum=-1;
        else if(day==11 && hour<11) sum=-1;
        else if(day==11 && min<11) sum=-1; // ㅠㅠ
        cout<<"#"<<a<<" "<<sum<<endl;
    }
    return 0;
}