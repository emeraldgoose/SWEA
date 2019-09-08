// 1218. [S/W 문제해결 기본] 4일차 - 괄호 짝짓기
#include <iostream>
#include <stdio.h>
#include <stack>
using namespace std;
int main() {
    int a, i;
    stack<char> stack;
    for(a=1;a<=10;a++) {
        int n;
        scanf("%d",&n);
        char arr[n];
        scanf("%s",arr);
        stack.push(arr[0]);
        for(i=1;i<n;i++) {
            if(stack.empty()) stack.push(arr[i]);
            else {
                if(stack.top()==arr[i]-1 || stack.top()==arr[i]-2) stack.pop();
                else stack.push(arr[i]);
            }
        }
        cout<<"#"<<a<<" "<<stack.empty()<<endl;
        while(!stack.empty()) {
            stack.pop();
        }
    }
    return 0;
}