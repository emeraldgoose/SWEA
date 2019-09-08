// 7985. Rooted Binary Tree 재구성
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int L, i, j, tp;
        cin>>L;
        int p=pow(2,L)-1;
        int *arr = new int[p];
        for(i=0;i<p;i++) cin>>arr[i];
        tp=p/2;
        cout<<"#"<<a<<" ";
        for(i=0;i<L;i++) {
            for(j=0;j<(int) pow(2,i);j++) cout<<arr[tp+(int) pow(2,(L-i))*j]<<" ";
            cout<<endl;
            tp-=pow(2,(L-2-i));
        }
        delete[] arr; arr=NULL;
    }
    return 0;
}