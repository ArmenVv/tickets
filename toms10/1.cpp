#include <iostream>
#include <cassert>
using namespace std;
bool max_negative(int* a, int n) {
	if (a[0] >= 0) return false;
	for (int i = 1;i < n;i++)
		if (a[i]<0 && a[i]>a[0])
			return false;
	return true;

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
	for (i = 0;i < n - 1;) {
		if (max_negative(arr[i], m)) {
			delete[]arr[i];
			for (int k = i;k < n - 1;k++)
				arr[k] = arr[k + 1];
			n--;
		}
		else i++;
	}
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