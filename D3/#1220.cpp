// 1220. [S/W 문제해결 기본] 5일차 - Magnetic
#include <iostream>
using namespace std;
int main() {
    int a, i, j ,k;
    for(a=1;a<=10;a++) {
        int n, count=0, flag=0;
        cin>>n; cin.ignore(1,'\n');
        int arr[n][n];
        for(i=0;i<n;i++) {
            for(j=0;j<n;j++) cin>>arr[i][j];
        }
        for(i=0;i<n;i++) {
            for(j=0;j<n;j++) {
                if(flag==0 && arr[j][i]==1) flag=1;
                if(flag==1 && arr[j][i]==2) {
                    count++; flag=0;
                }
            }
            flag=0;
        }
        cout<<"#"<<a<<" "<<count<<endl;
    }
    return 0;
}