// 5607. [Professional] 조합
// 출처 : https://cru6548.tistory.com/23
#include <iostream>
#define DIV 1234567891
typedef long long ll;
using namespace std;
ll power(ll x, ll y) {
    ll p=1;
    while(y>0) {
        if((y%2)==1) {
            p*=x;
            p%=DIV;
        }
        x*=x;
        x%=DIV;
        y/=2;
    }
    return p;
}
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        ll N, R,res=0;
        cin>>N>>R;
        // factorial array : 시간복잡도를 O(1)로 만들기 위해
        ll *fact = new ll[N+1]; fact[1]=1;
        for(int i=2;i<=N;i++) fact[i]=(fact[i-1]*i)%DIV;
        // N!에 대한 역원
        ll *inv = new ll[N+1];
        inv[N] = power(fact[N], DIV - 2);

        for(int i=N-1;i>0;i--)
            inv[i]=(inv[i+1]*(i+1))%DIV;
        
        res+=fact[N];
        res=(res*inv[R])%DIV;
        res=(res*inv[N-R])%DIV;
        cout<<"#"<<a<<" "<<res<<'\n';
        delete[] fact; delete[] inv;
    }
    return 0;
}