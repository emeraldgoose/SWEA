// 1959. 두 개의 숫자열
#include<iostream>
using namespace std;
int solve(int arr1[], int arr2[], int r, int s) {
	int k, l, sum = 0, max = 0;
	for (k = 0; k <= r; k++) {
		for (l = 0; l < s; l++) sum += arr1[l] * arr2[k + l];
		if (sum > max) max = sum;
		sum = 0;
	}
	return max;
}
int main() {
	int testCase, i, j;
	int n, m;
    cin>>testCase;
	for (i = 1; i <= testCase; i++) {
		cin >> n >> m;
		int* a = new int[n];
		int* b = new int[m];
		for (j = 0; j < n; j++) cin >> a[j];
		for (j = 0; j < m; j++) cin >> b[j];
        cout<<"#"<<i<<" ";
		if (n > m) cout<<solve(b, a, n-m, m)<<endl;
		else cout<<solve(a, b, m-n, n)<<endl;
		delete[] a; delete[] b;
	}
	return 0;
}