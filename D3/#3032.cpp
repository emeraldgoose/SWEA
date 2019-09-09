// 3032. 홍준이의 숫자 놀이
// 확장 유클리드 호제법
// 코드 출처 : https://www.crocus.co.kr/1232
#include <cstdio>
#include <vector>
using namespace std;
int main() {
    int testCase, a;
    scanf("%d",&testCase);
    for(a=1;a<=testCase;a++) {
        vector<int> q, t, r, s;
        s.push_back(1); s.push_back(0);
        t.push_back(0); t.push_back(1);
        long A, B;
        scanf("%ld %ld",&A,&B);
        r.push_back(A); r.push_back(B);
        int i;
        for(i=0;i<100;i++) {
            int r2 = r[s.size()-2];
            int r1 = r[s.size()-1];
            q.push_back(r2/r1);
            r.push_back(r2%r1);
            if(r[r.size()-1]==0) break;
            int s2=s[s.size()-2];
            int s1=s[s.size()-1];
            int t2=t[t.size()-2];
            int t1=t[t.size()-1];
            int q1 = q[q.size()-1];
            s.push_back(s2-s1*q1);
            t.push_back(t2-t1*q1);
        }
        if(i==100) printf("#%d -1\n",a);
        else printf("#%d %d %d\n",a,s[s.size()-1],t[t.size()-1]);
    }
    return 0;
}