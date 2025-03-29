#include <iostream>
using namespace std;
int loopfunc(int a[], int n, int (*sum_f)(int a, int b)) {
	int i,j, sum = 0;
	for (i = 0;i < n;i++) {
		for (j = i;j < n;j++) {
			sum += sum_f(a[i], a[j]);
		}
	}
	return sum;
}
int sum_f(int a,int b) {
	return a + b;

}
int main() {
	const int n = 5;
	int arr[n], i;
	for (i = 0;i < n;i++) {
		cin >> arr[i];
	}
	cout<<loopfunc(arr, n,sum_f);
	return 0;
}