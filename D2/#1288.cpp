// 1288. 새로운 불면증 치료법
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int b=1, k;
        long n, sheep, res;
        cin>>n;
        int arr[10]; memset(arr,0,sizeof(arr));
        while(1) {
            sheep = n; sheep = sheep*b; res=sheep;
            while(sheep!=0) {
                int tmp=sheep%10; sheep/=10;
                arr[tmp]=1;
            }
            k=0;
            for(int i=0;i<10;i++) {
                if(arr[i]==1) k++;
            }
            if(k==10) break;
            b++;
        }
        cout<<"#"<<a<<" "<<res<<endl;
    }
    return 0;
}