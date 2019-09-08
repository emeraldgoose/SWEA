// 1946. 간단한 압축 풀기
#include<iostream>
using namespace std;
int main() {
	int testCase, a;
    cin>>testCase;
	for (a = 1; a <= testCase; a++) {
        int n;
		cin >> n;
		char* ch = new char[n];
		int* cnt = new int[n];
        int count=1;
		for (int j = 0; j < n; j++) cin >> ch[j] >> cnt[j];
        cout<<"#"<<a<<endl;
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < cnt[j]; k++) {
                cout << ch[j];
				if ((count % 10) == 0) cout<<"\n";
				count++;
			}
		} cout<<"\n";
		delete[] ch; delete[] cnt;
	}
	return 0;
}