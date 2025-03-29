#include <iostream>
#include <cassert>
using namespace std;
bool check(int a[], int k) {
	for (int i = 0;i < k-1;i++)
		if (a[i] >= a[i + 1])
			return false;
	return true;
}
int main() {
	int** arr, m, n, i, j;
	cin >> m >> n;
	arr = new int* [m];
	assert(arr);
	for (i = 0;i < m;i++) {
		arr[i] = new int [n];
		assert(arr[i]);
	}
	for (i = 0;i < m;i++)
		for (j = 0;j < n;j++)
			cin >> arr[i][j];
	int del_index = -1;
	for (i = 0;i < m - 1;i++) {
		if (check(arr[i], n)) {
			del_index = i;
			delete []arr[i];
			break;
		}
	}
	if (del_index != -1) {
		for (i = del_index;i < m - 1;i++) {
			arr[i] = arr[i + 1];
		}
		m--;

	}
	for (i = 0;i < m;i++) {
		cout << endl;
		for (j = 0;j < n;j++) {
			cout << arr[i][j] << " ";
		}
	}
	for (i = 0;i < m;i++)
		delete[]arr[i];
	delete[]arr;
	return 0;

}