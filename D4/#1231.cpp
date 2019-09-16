// 1231. [S/W 문제해결 기본] 9일차 - 중위순회
#include <iostream>
using namespace std;
char tree[101];
int n;
void inorder(int root) {
    if(root>n) return ;
    inorder(2*root);
    cout<<tree[root];
    inorder(2*root+1);
}
int main() {
    int tc;
    for(tc=1; tc<=10; tc++) {
        int i, s, tmp1, tmp2;
        cin>>n;
        for(i=1;i<=n;i++) {
            cin>>s>>tree[i];
            if(n>2*i) cin>>tmp1>>tmp2;
            if(n==2*i) cin>>tmp1;
        }
        cout<<'#'<<tc<<' ';
        inorder(1);
        cout<<'\n';
    }
    return 0;
}
