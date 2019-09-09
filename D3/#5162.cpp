// 5162. 두가지 빵의 딜레마
#include <iostream>
using namespace std;
int main() {
    int testCase, q;
    cin>>testCase;
    for(q=1;q<=testCase;q++) {
        int a, b, c, min;
        cin>>a>>b>>c;
        if(a>=b) min=b;
        else min=a;
        cout<<"#"<<q<<" "<<c/min<<endl;
    }
    return 0;
}