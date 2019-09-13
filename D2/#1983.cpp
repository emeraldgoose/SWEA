// 1983. 조교의 성적 매기기
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int testCase, a;
    char score[10][2]={{'A','+'},{'A','0'},{'A','-'},{'B','+'},{'B','0'},{'B','-'},{'C','+'},{'C','0'},{'C','-'},{'D','0'}};
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
		int N, target;
        cin>>N>>target;
        vector<int> v;
        int k, n, m;
        for(int i=1;i<=N;i++) {
            cin>>k>>n>>m;
            int tmp = (35*k)+(45*n)+(20*m);
            v.push_back(tmp);
            if(target==i) target=tmp;
        }
        // sorting
        sort(v.begin(), v.end());
        int cnt=0;
        for(int i=v.size()-1;i>=0;--i) {
            if(v[i]==target) break;
            else cnt++;
        }
        // output
        int tmp = cnt/(N/10);
        cout<<"#"<<a<<" "<<score[tmp][0]<<score[tmp][1]<<endl;
    }
    return 0;
}