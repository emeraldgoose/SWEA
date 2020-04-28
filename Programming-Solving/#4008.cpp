// 4008. [모의 SW 역량테스트] 숫자 만들기
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N;
int pl, mi, mul, di;
vector<int> number;
vector<int> oper; // 연산자
int max_ret, min_ret;
void solve() {
    for(int i=0;i<pl;i++) oper.push_back(0);
    for(int i=0;i<mi;i++) oper.push_back(1);
    for(int i=0;i<mul;i++) oper.push_back(2);
    for(int i=0;i<di;i++) oper.push_back(3);
    do{
        int sum=number[0];
        for(int i=1;i<number.size();i++) {
            if(oper[i-1]==0) sum+=number[i];
            else if(oper[i-1]==1) sum-=number[i];
            else if(oper[i-1]==2) sum*=number[i];
            else if(oper[i-1]==3) sum/=number[i];
        }
        if(sum>max_ret) max_ret=sum;
        if(min_ret>sum) min_ret=sum;
    }while(next_permutation(oper.begin(),oper.end()));
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    freopen("input.txt","r",stdin);
    int T, tc=0;
    cin>>T;
    while(T--) {
        tc++;
        // init
        max_ret=-100000000, min_ret=100000000;
        number.clear(); oper.clear();
        // input
        cin>>N;
        cin>>pl>>mi>>mul>>di;
        for(int i=0;i<N;i++) {
            int tmp; cin>>tmp; number.push_back(tmp);
        }
        solve();
        cout<<'#'<<tc<<' '<<max_ret-min_ret<<'\n';
    }
    return 0;
}