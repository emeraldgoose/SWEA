// 1936. 1대1 가위바위보
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin>>a>>b;
    if(a==1) {
        if(b==3) cout<<"A";
        else if(b==2) cout<<"B";
    }
    else if (a==2) {
        if(b==1) cout<<"A";
        else if(b==3) cout<<"B";
    }
    else {
        if(b==1) cout<<"B";
        else if(b==2) cout<<"A";
    }
    cout<<'\n';
    return 0;
}