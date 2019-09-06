// 2027. 대각선 출력하기
#include <iostream>
using namespace std;
int main() {
    int i, j;
    char seq[5] = {'+','+','+','+','+'};
    for(i=0;i<5;i++) {
        seq[i] = '#';
        for(j=0;j<5;j++) cout<<seq[j];
        for(j=0;j<5;j++) seq[j] = '+';
        cout<<'\n';
    }
    return 0;
}