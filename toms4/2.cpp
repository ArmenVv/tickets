#include <iostream>
using namespace std;
double average(int a, int b, int c) {
	return (a + b + c) / 3.0;
}
double sumOf(int a[], int k, double (*average)(int, int, int)) {
	int i, j;
    double sum = 0.0;
	for (i = 0;i < k;i++)
		for (int j = 0;j <= i;j++)
			sum += average(a[i], a[j], a[i] * a[j]);
	return sum;
}
int main() {
	const int n = 5;
	int arr[n], i;
	for (i = 0;i < n;i++)
		cin >> arr[i];
	cout << sumOf(arr, n, average);
	return 0;
}