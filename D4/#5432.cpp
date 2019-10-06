// 5432. 쇠막대기 자르기
// 출처 : https://his130.tistory.com/477
#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
int main() {
    int testCase;
    cin>>testCase;
    for(int a=1;a<=testCase;a++) {
        string str;
        cin>>str;
        stack<char> s;
        char tmp = 'c';
        int count=0;
        for(int i=0;i<str.length();i++) {
            if(str[i]=='(') s.push(str[i]);
            else {
                s.pop();
                if(tmp=='(') count += s.size();
                else count++;
            }
            tmp = str[i];
        }
        cout<<"#"<<a<<" "<<count<<endl;
    }
    return 0;
}