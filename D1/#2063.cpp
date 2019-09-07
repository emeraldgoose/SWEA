// 2063. 중간값 찾기
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, seq[199];
    cin>>n;
    for(int i=0;i<n;i++) cin>>seq[i];
    sort(seq,seq+n);
    cout<<seq[n/2]<<endl;
    return 0;
}