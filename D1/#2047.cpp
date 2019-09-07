// 2047. 신문 헤드라인
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    string ch;
    cin>>ch;
    for(int i=0;i<ch.length();i++) {
        if(ch[i] >= 97) ch[i] -= 32;
        if(ch[i] == 0) break;
    }
    for(int i=0;i<ch.length();i++) cout<<ch[i];
    return 0;
}
