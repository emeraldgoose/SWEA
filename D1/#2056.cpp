// 2056. 연월일 달력
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
 	int testCase, tc;
    cin>>testCase;
    for(tc=1;tc<=testCase;tc++) {
        int rt=0, seq, year, month, day;
    	cin>>seq;
      	year = seq/10000;
        month = (seq-(year*10000))/100;
        day = seq-(year*10000)-(month*100);
        // 안되는 케이스
        if (month == 0 || day == 0)	rt = 1;
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			if (day > 31)	rt = 1;
		if (month == 2)
			if (day > 28)	rt = 1;
		if (month == 2 || month == 4 || month == 6 || month == 9 || month == 11)
			if (day > 30)	rt = 1;
        // output
        if(rt==1) printf("#%d -1\n",tc);
        else {
            cout<<"#"<<tc<<" ";
            if(year<1000) {
                cout<<"0"<<year<<"/";
                if(month<10) {
                    cout<<"0"<<month<<"/";
                    if(day<10) cout<<"0"<<day<<endl;
        			else cout<<day<<endl;
                }
        		else {
                    cout<<month<<"/";
                    if(day<10) cout<<"0"<<day<<endl;
                    else cout<<day<<endl;
                }
            }
           	else {
                cout<<year<<"/";
                if(month<10) {
                    cout<<"0"<<month<<"/";
                    if(day<10) cout<<"0"<<day<<endl;
                    else cout<<day<<endl;
                }
                else {
                    cout<<month<<"/";
                    if(day<10) cout<<"0"<<day<<endl;
        			else cout<<day<<endl;
                }
            }
        }
    }
    return 0;
}