// 2050. 알파벳을 숫자로 변환
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++) cout<<str[i]-64<<" ";
    cout<<'\n';
    return 0;   
}
