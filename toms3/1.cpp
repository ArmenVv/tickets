#include <iostream>
#include <cassert>
using namespace std;
void swap_MaxMin(int **a,int n,int m) {
	int max_idx = 0, min_idx = 0,maxEl = a[0][0],minEl = a[0][0];
	for(int i=0;i<n;i++)
		for (int j = 0;j < m;j++) {
			if (maxEl < a[i][j]) {
				maxEl = a[i][j];
				max_idx = i;
			}
			else {
				minEl = a[i][j];
				min_idx = i;
			}
		}
	int* temp = a[max_idx];
	a[max_idx] = a[min_idx];
	a[min_idx] = temp;

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
	swap_MaxMin(arr,n,m);
	for (i = 0;i < n;i++) {
		cout << endl;
		for (j = 0;j < m;j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	return 0;



}