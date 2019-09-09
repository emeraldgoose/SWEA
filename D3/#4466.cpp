// 4466. 최대 성적표 만들기
#include <iostream>
using namespace std;
int maxCheck(int arr[], int c) {
    int l, lo, max=0;
    for(l=0;l<c;l++) {
        if(arr[l]>max) max=arr[l], lo=l;
    } return lo;
}
int main() {
    int testCase, a, i, sum=0;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int n, k, p;
        cin>>n>>k;
        int score[n];
        for(i=0;i<n;i++)
            cin>>score[i];
		for(i=0;i<k;i++) {
            p=maxCheck(score,n);
            sum+=score[p];
            score[p]=0;
        }
        cout<<"#"<<a<<" "<<sum<<endl; sum=0;
    }
    return 0;
}