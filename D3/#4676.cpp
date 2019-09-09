// 4676. 늘어지는 소리 만들기#include <iostream>
#include <list>
#include <cstring>
using namespace std;
int main() {
	int testCase, a;
	cin >> testCase;
	for (a = 1; a <= testCase; a++) {
		string str;
		int i, j, n, lo;
		list<char> lst;
		list<char>::iterator iter;
		cin >> str;
		for (i = 0; i < str.length(); i++)
			lst.push_back(str.at(i));
		cin >> n;
		int* arr = new int[str.length()+1];
		memset(arr, 0, (str.length() +1) * sizeof(int));
		for (i = 1; i <= n; i++) {
			cin >> lo; arr[lo]++;
		}
		for (i = str.length(); i >= 0; i--) {
			iter = lst.begin();
			for (j = 0; j < i; j++)
				iter++;
			lst.insert(iter, arr[i], '-');
		}
		delete[] arr;
		cout << "#" << a << " ";
		for (iter = lst.begin(); iter != lst.end(); iter++)
			cout << *iter;
		cout << endl;
	}
	return 0;
}