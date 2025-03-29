#include <iostream>
#include <cassert>
using namespace std;
int find_max(int** a, int n, int m) {
	int i, j, max_idx=0, maxEl = a[0][0];
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			if (maxEl < a[i][j]) {
				maxEl = a[i][j];
				max_idx = i;
			}
	return max_idx;
}
int main(){
	int** arr, n, m,i,j;
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
	int max_idx = find_max(arr, n, m);
	delete[]arr[max_idx];
	for (i = max_idx;i < n-1;i++) {
		arr[i] = arr[i + 1];
	}
	n--;
	for (i = 0;i < n;i++) {
		for (j = 0;j < m;j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	for (i = 0;i < n;i++)
		delete[] arr[i];
	delete[]arr;
	return 0;
	  

}