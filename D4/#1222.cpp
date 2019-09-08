// 1222. [S/W 문제해결 기본] 6일차 - 계산기1
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main() {
	int tc;
	for (tc = 1; tc <= 10; tc++) {
		int i, n; char ch;
        stack<char> s;
    	vector<char> v;
        cin>>n;
        for(i=0;i<n;i++) {
            cin>>ch;
            if(ch=='+') {
                if(!s.empty()) {
                    v.push_back(s.top()); s.pop();
                }
                s.push(ch);
            }
            else v.push_back(ch);
		}
        v.push_back(s.top()); s.pop();
        stack<int> s2;
        for(i=0;i<n;i++) {
            if(v[i]=='+') {
                int a=s2.top(); s2.pop();
                int b=s2.top(); s2.pop();
                s2.push(a+b);
            }
            else s2.push(v[i]-48);
        }
        cout<<"#"<<tc<<" "<<s2.top()<<endl;
    }
	return 0;
}