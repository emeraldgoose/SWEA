// 1224. [S/W 문제해결 기본] 6일차 - 계산기3
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main() {
    int tc;
    for(tc=1;tc<=10;tc++) {
    	int i, n;
        stack<char> s;
    	vector<char> v;
        cin>>n;
        char *arr = new char [n];
        for(i=0;i<n;i++) cin>>arr[i];
        // infix -> postfix
        for(i=0;i<n;i++) {
            if(arr[i]>=48 && arr[i]<=57) v.push_back(arr[i]);
            else {
                if(s.empty() || arr[i]=='(') s.push(arr[i]);
                else {
                    if(arr[i]==')') {
                        while(s.top()!='(') {
                            v.push_back(s.top()); s.pop();
                        }
                        s.pop();
                    }
                    else if(s.top()=='*' && arr[i]=='+') {
                        v.push_back(s.top()); s.pop(); s.push(arr[i]);
                    }
                    else if(s.top()==arr[i]) v.push_back(arr[i]);
                    else s.push(arr[i]);
                }
            }
        }
        if(!s.empty()) {
            v.push_back(s.top()); s.pop();
        }
        // calc
        stack<int> s2;
        for(i=0;i<v.size();i++) {
            if(v[i]=='+') {
                int a=s2.top(); s2.pop();
                int b=s2.top(); s2.pop();
                s2.push(a+b);
            }
            else if(v[i]=='*') {
                int a=s2.top(); s2.pop();
                int b=s2.top(); s2.pop();
                s2.push(a*b);
            }
            else s2.push(v[i]-48);
        }
        cout<<"#"<<tc<<" "<<s2.top()<<endl; delete[] arr;
    }
    return 0;
}