#include <iostream>
#include <cassert>
using namespace std;
bool check(int a[], int m) {
	int min = a[0],count=0;
	for (int i = 1;i < m;i++)
		if (min > a[i])
			min = a[i];
	for (int i = 0;i < m;i++)
		if (min == a[i]) count++;
	return count == 1;

}
int main() {
	int** arr, n, m, i, j;
	cin >> n >> m;
	arr = new int* [n];
	assert(arr);
	for (i = 0;i < n;i++) {
		arr[i] = new int[m];
		assert(arr[i]);
	}
	for (i = 0;i < n;i++)
		for (j = 0;j < m;j++)
			cin >> arr[i][j];
	for (i = 0;i < n;i++) {
		if (check(arr[i], m)) {
			for (j = i;j < n-1;j++) {
				delete[]arr[i];
				arr[j] = arr[j + 1];
			}
		}
	}
	n--;
	for (i = 0;i < n;i++) {
		for (j = 0;j < m;j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	for (i = 0;i < n;i++)
		delete[]arr[i];
	delete[]arr;
	return 0;
}
