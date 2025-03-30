#include <iostream>
using namespace std;
int factorial(int k) {
	int fact = 1;
	for (int i = 1;i <= k;i++) {
		fact *= i;
	}
	return fact;
}
int expression(int a,int b) {
	int res = 1;
	for (int i = 0;i < 2 * b;i++)
		res *= a;
	return res;

}
int res(int a,int c,int d, int x,int i,int (*expression)(int,int)) {
	return (a * expression(x, i) + c) / d;
}
int main() {
	int n, x, a = 1, b, c = 1, d = 1;
	cin >> n >> x;
	int sum = x + 1;
	for (int i = 1;i < n;i++) {
		a *= -1;
		c *= 2;
		d *= factorial(3 * i);
		sum += res(a, c, d, x, i,expression);
		
	}
	cout << sum << endl;
	return 0;
}