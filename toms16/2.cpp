#include <iostream>
using namespace std;
double expression(double a, double b) {
	double res1 = 1, res2 = a*a, res3 = 1, res4 = 1;
	for (int i = 1;i <= b;i++) {
		res1 *= -1;
		res3 *= a;
		res4 *= i;
	}
	return (res1 * res2 + res3) / res4;
	    
    

}
double f(double n, double x, double(*expression)(double,double)) {
	int i;
	double sum = -((x*x)+1);
	for (i = 1;i < n;i++)
		sum += expression(x, i);
	return sum;
}
int main() {
	int n, x;
	cin >> n >> x;
	cout << f(n, x, expression);
	return 0;
}