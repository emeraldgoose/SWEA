// 1209. [S/W 문제해결 기본] 2일차 - Sum
#include <iostream>
using namespace std;
int main() {
    int testCase, i, j, k;
    int sum_w=0, sumh[100], sum_cross_r=0, sum_cross_l=0, max=0;
    for(i=1;i<=10;i++) {
        cin>>testCase;
        int arr[100];
        for(j=0;j<100;j++) sumh[j]=0;
        for(j=0;j<100;j++) {
            for(k=0;k<100;k++) {
                cin>>arr[k];
                sum_w += arr[k];
                sumh[k]+=arr[k];
            }
            sum_cross_r += arr[j];
            sum_cross_l += arr[99-j];
            if(sum_w>max) max=sum_w;
            sum_w=0;
    	}
        if(sum_cross_r > max) max=sum_cross_r;
        if(sum_cross_l > max) max=sum_cross_l;
        for(j=0;j<100;j++) {
    		if(sumh[j]>max) max=sumh[j];
    	}
    	cout<<"#"<<testCase<<" "<<max<<endl;
        sum_w=0, max=0, sum_cross_r=0, sum_cross_l=0;
    }
    return 0;
}