// 3376. 파도반 수열
// a[n] = a[n-2] + a[n-3]
#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int testCase, a;
	cin >> testCase;
	for (a = 1; a <= testCase; a++) {
		int i, N;
		cin >> N;
		long long *arr = new long long[N]; memset(arr, 0, sizeof(long long)*N);
		arr[0] = 1, arr[1] = 1, arr[2] = 1;
		for (i = 3; i < N; i++) arr[i] = arr[i - 2] + arr[i - 3];
		cout << "#" << a << " " << arr[N - 1] << endl;
		delete[] arr;
	}
	return 0;
}