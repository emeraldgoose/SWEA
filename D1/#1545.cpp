#include <iostream>
using namespace std;
int main() {
    int i, num;
    cin>>num;
    i = num+1;
    while(i--) {
        cout<<i<<" ";
        if(i==0) break;
    }
    return 0;
}
