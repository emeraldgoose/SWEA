// 1234. [S/W 문제해결 기본] 10일차 - 비밀번호
#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
int main() {
    int a, i;
    for(a=1;a<=10;a++) {
        int n;
        string str;
        stack<char> stack;
        cin>>n>>str;
        for(i=0;i<n;i++) {
            if(stack.empty()) stack.push(str.at(i));
            else {
                if(stack.top()==str.at(i)) stack.pop();
                else stack.push(str.at(i));
            }
        }
        int tmp=stack.size(); char arr[tmp];
        for(i=0;i<tmp;i++) {
            arr[tmp-i-1]=stack.top();
            stack.pop();
        }
        cout<<"#"<<a<<" ";
        for(i=0;i<tmp;i++)
            cout<<arr[i];
        cout<<'\n';
    }
    return 0;
}