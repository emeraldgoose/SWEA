// 1219. [S/W 문제해결 기본] 4일차 - 길찾기
#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
int main() {
	int tc;
	stack<int> s;
	for (tc = 1; tc <= 10; tc++) {
		int i, test, len, a, b, tmp, flag=0;
		cin >> test >> len;
		int arr1[100], arr2[100];
		memset(arr1, NULL, sizeof(int) * 100); memset(arr2, NULL, sizeof(int) * 100);
		for (i = 0; i < len; i++) {
			cin >> a >> b;
			if (arr1[a] == NULL) arr1[a] = b;
			else arr2[a] = b;
		}
		s.push(0);
		while (!s.empty()) {
			tmp = s.top();
			if (tmp == 99) flag = 1;
			s.pop();
			if(arr1[tmp]!=NULL) s.push(arr1[tmp]); 
			if(arr2[tmp]!=NULL) s.push(arr2[tmp]);
		}
		cout <<"#"<<test<<" "<< flag << endl;
	}
	return 0;
}