#include <iostream>
using namespace std;
struct Point {
	int x;
	int y;
};
struct Circle {
	int a;
	int b;
	int radius;
};
void inputPoints(Point&p) {
		cin >> p.x >> p.y;
}
void inputCircle(Circle& c) {
	cin >> c.a >> c.b >> c.radius;
}
bool PointInCircle(Point&p, Circle&c) {
	int d = (c.a - p.x) * (c.a - p.x) + (c.b - p.y) * (c.b - p.y);
	return d <= c.radius * c.radius;

}
int main() {
	int n,count=0;
	Point point;
	cin >> n;
	Circle circ;
	inputCircle(circ);
	for(int i=0;i<n;i++) {
		inputPoints(point);
		if (PointInCircle(point, circ)) {
			count++;
		}
	}
	if (count == n) cout << "YES";
	else cout << "NO";
	return 0;
}