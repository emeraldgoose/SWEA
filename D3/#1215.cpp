// 1215. [S/W 문제해결 기본] 3일차 - 회문1
#include <iostream>
using namespace std;
int check(char arr[], int num) {
    int p, q, cnt=0, count=0;
    for(p=0;p<=(8-num);p++) {
        for(q=0;q<(num/2);q++) {
            if(arr[p+q]==arr[p+num-1-q]) cnt++;
        }
        if(cnt==(num/2)) count++; cnt=0;
    }
    return count;
}
int main() {
    int a, i, j;
    for(a=1;a<=10;a++) {
        int tar, sum=0; char tmp[9], ch[8][8];
        cin>>tar; cin.ignore(1,'\n');
        for(i=0;i<8;i++) {
            cin.getline(tmp,9);
            for(j=0;j<8;j++) ch[i][j]=tmp[j];
        }
        char temp[8];
        for(i=0;i<8;i++) {
            for(j=0;j<8;j++) temp[j]=ch[i][j];
            sum+=check(temp,tar);
        }
        for(i=0;i<8;i++) {
            for(j=0;j<8;j++) temp[j]=ch[j][i];
            sum+=check(temp,tar);
        }
        cout<<"#"<<a<<" "<<sum<<endl; sum=0;
    }
    return 0;
}