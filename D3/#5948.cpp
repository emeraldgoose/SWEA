// 5948. 새샘이의 7-3-5 게임
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int testCase, a;
    scanf("%d",&testCase);
    for(a=1;a<=testCase;a++) {
        int arr[7];
        vector<int> v;
        for(int i=0;i<7;i++) scanf("%d",&arr[i]);
        for(int i=0;i<7;i++) {
            for(int j=i+1;j<7;j++) {
                for(int k=j+1;k<7;k++) {
                    int sum=0;
                    sum+=arr[i]+arr[j]+arr[k];
                    v.push_back(sum);
                }
            }
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        // output
        printf("#%d %d\n",a,v[v.size()-5]);
    }
    return 0;
}