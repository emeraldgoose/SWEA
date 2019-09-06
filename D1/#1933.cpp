// 1933. 간단한 N의 약수
#include <iostream>
using namespace std;
int main() {
    int num, tmp;
    cin>>num;
    for(int i=1;i<=num;i++) {
        	tmp = num%i;
            if(tmp == 0) cout<<i<<" ";   
    }
	return 0;
}