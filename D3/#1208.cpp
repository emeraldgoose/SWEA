// 1208. [S/W 문제해결 기본] 1일차 - Flatten
#include <iostream>
using namespace std;
int check_max(int arr[]) {
    int i, max=0, l_max;
    for(i=0;i<100;i++) {
        if(arr[i]>max) {
            max=arr[i]; l_max=i;
        }
    } return l_max;
}
int check_min(int arr[]) {
    int i, min=255, l_min;
    for(i=0;i<100;i++) {
        if(arr[i]<min) {
            min=arr[i]; l_min=i;
        }
    } return l_min;
}
int main() {
    int a, j;
    int build[100], lo_max, lo_min, count;
    for(a=1;a<=10;a++) {
        cin>>count;
        for(j=0;j<100;j++) cin>>build[j];
        for(j=1;j<=count;j++) {
            lo_max = check_max(build);
            lo_min = check_min(build);
            build[lo_max]--, build[lo_min]++;
        }
        lo_max = check_max(build);
        lo_min = check_min(build);
        cout<<"#"<<a<<" "<<build[lo_max]-build[lo_min]<<endl;
    }
    return 0;
}