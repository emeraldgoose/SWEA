// 1976. 시각덧셈
#include <iostream>
using namespace std;
int main() {
    int testCase, i;
    cin>>testCase;
    for(i=1;i<=testCase;i++) {
        int hour1, hour2, min1, min2;
        cin>>hour1>>min1>>hour2>>min2;
        hour1 += hour2; min1 += min2;
        if(min1>59) {
            min1 -= 60; hour1 += 1;
        }
        if(hour1>12) hour1 -= 12;
        cout<<"#"<<i<<" "<<hour1<<" "<<min1<<endl;
    }   
    return 0; 
}