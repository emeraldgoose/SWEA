// 1204. [S/W 문제해결 기본] 1일차 - 최빈수 구하기
#include <iostream>
using namespace std;
int main() {
  int testCase, a, testnum;
  cin>>testCase;
  for(a=1;a<=testCase;a++) {
      int i, num;
      int cnt[101], max=0, res;
      cin>>testnum;
      for(i=0;i<101;i++)
          cnt[i] = 0;
      for(i=0;i<1000;i++) {
         	cin>>num;
          cnt[num] += 1;
      }
      for(i=0;i<101;i++) {
          if(cnt[i] >= max) {
              max=cnt[i]; res = i;
          }
      }
      cout<<"#"<<testnum<<" "<<res<<endl;
  }
  return 0;
}
