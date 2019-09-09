// 1216. [S/W 문제해결 기본] 3일차 - 회문2
#include <iostream>
using namespace std;
int check(char arr[], int nu) {
    int p, q, cnt=0, count=0;
    for(p=0;p<=(100-nu);p++) {
        for(q=0;q<(nu/2);q++) {
            if(arr[p+q]==arr[p+nu-1-q]) cnt++;
        }
        if(cnt==(nu/2)) count++; cnt=0;
    }
    if(count!=0) return 1;
    else return 0;
}
int main() {
    int a, i, j;
    for(a=1;a<=10;a++) {
        int tar; char tmp[101], ch[100][100];
        cin>>tar; cin.ignore(1,'\n');
        for(i=0;i<100;i++) {
            cin.getline(tmp,101);
            for(j=0;j<100;j++) ch[i][j]=tmp[j];
        }
        char temp[100];
        int tp, max=0, num;
        for(i=0;i<100;i++) {
            for(j=0;j<100;j++) temp[j]=ch[i][j];
            num=2;
            while(num!=99) {
	        if(check(temp,num)) {
                   if(num>max) max=num;
                }
                num++;
            }
        }
        for(i=0;i<100;i++) {
            for(j=0;j<100;j++) temp[j]=ch[j][i];
            num=2;
            while(num!=99) {
            	if(check(temp,num)) {
                    if(num>max) max=num;
                }
    	        num++;
            }
        }
        cout<<"#"<<tar<<" "<<max<<endl;
    }
    return 0;
}
