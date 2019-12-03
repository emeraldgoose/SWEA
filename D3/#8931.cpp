// 8931. 제로
#include <iostream>
#include <stack>
using namespace std;
int main() {
    int testCase;
    cin>>testCase;
    for(int a=1;a<=testCase;a++) {
        int k, n;
        cin>>k;
        stack<long> s;
        for(int i=0;i<k;i++) {
            cin>>n;
            if(n==0) s.pop();
            else s.push(n);
        }
        long sum = 0;
        while(!s.empty()) {
            long tmp = s.top(); s.pop();
            sum+=tmp;
        }
        cout<<"#"<<a<<" "<<sum<<endl;
    }
    return 0;
}
