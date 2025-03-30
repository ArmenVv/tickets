#include <iostream>
using namespace std;
double expression(double a, double b, int k) {
	double r1 = 1;
	int r2 = -1;
	for (int i = 0;i < k + 1;i++)
		r1 *= a;
	for (int i = 0;i < k;i++)
		r2 *= -1;
	return (r1 * r2) / b;

}
double f(double a[],int n, double (*expression)(double, double,int)) {
	double sum = 0;
	for (int i = 0;i < n - 2;i++) {
		sum += expression(a[i], a[i + 1],i);
	}
	return sum;
}
int main() {
	const int n = 5;
	double arr[n]; 
	int i;
	for (i = 0;i < n;i++)
		cin >> arr[i];
	cout << f(arr, n, expression);
	return 0;
}