// 1245. [S/W 문제해결 응용] 2일차 - 균형점
// https://organize-study.tistory.com/162
#include <iostream>
using namespace std;
int main() {
    int testCase;
    cin>>testCase;
    for(int a=1;a<=testCase;a++) {
        int N;
        cin>>N;
        int* x = new int[N];
        int* m = new int[N];
        for(int i=0;i<N;i++) cin>>x[i];
        for(int i=0;i<N;i++) cin>>m[i];
        
        cout<<"#"<<a<<" ";
        cout << fixed;
        cout.precision(10);

        double l, r, ans;
        for(int i=0;i<N-1;i++) {
            l = x[i], r = x[i+1];
            for(int j=0;j<50;j++) {
                double s = 0;
                double mid = (l+r)/2;
                for(int k=0;k<=i;k++) s+=m[k]/((mid-x[k])*(mid-x[k]));
                for(int k=i+1;k<N;k++) s-=m[k]/((mid-x[k])*(mid-x[k]));
                if(s>0) l = mid;
                else {
                    ans = mid;
                    r = mid;
                }
            }
            cout<<ans<<endl;
        }
        delete[] x;
        delete[] m;
    }
    return 0;
}