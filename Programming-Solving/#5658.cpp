#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;
typedef long long ll;
int N, K;
char map[28];
vector<char> number;
vector<ll> v;
void rotation() {
    char tmp=map[N-1];
    for(int i=N-1;i>=0;i--) map[i]=map[i-1];
    map[0]=tmp;
}
void calc() {
    ll sum=0;
    for(int k=0;k<N/4;k++) {
        ll tmp=0;
        if(number[k]>='0' && number[k]<='9') tmp+=number[k]-'0';
        else if(number[k]>='A' && number[k]<='F') tmp+=number[k]-'A'+10;
        tmp*=pow(2,(N/4-1-k)*4);
        sum+=tmp;
    }
    if(!v.empty()) {
        for(int k=0;k<v.size();k++) {
            if(v[k]==sum) return;
        }
        v.push_back(sum);
    }
    else v.push_back(sum);
}
void solve() {
    int r_cnt=0;
    int len=0;
    while(r_cnt<N/4) {
        for(int i=0;i<N;i++) {
            number.push_back(map[i]); len++;
            if(len==N/4) {
                len=0; calc(); number.clear();
            }
        }
        rotation();
        r_cnt++;
    }
    sort(v.begin(),v.end());
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    freopen("input.txt","r",stdin);
    int T, tc=0;
    cin>>T;
    while(T--) {
        tc++;
        v.clear(); memset(map,0,sizeof(map));
        cin>>N>>K;
        string str;
        cin>>str;
        for(int i=0;i<N;i++) map[i]=str[i];
        solve();
        cout<<'#'<<tc<<' '<<v[v.size()-K]<<'\n';
    }
    return 0;
}