#include <iostream>
#include <cassert>
using namespace std;
void swap(int **a,int n,int index) {
	int* temp = a[n-1];
	a[n - 1] = a[index];
	a[index] = temp;



}
int main() {
	int** arr, n, i, j,*arr1;
	cin >> n;
	arr = new int* [n];
	assert(arr);
	arr1 = new int[n];
	assert(arr1);
	for (i = 0;i < n;i++) {
		arr[i] = new int[n];
		assert(arr[i]);
	}
	for (i = 0;i < n;i++)
		for (j = 0;j < n;j++)
			cin >> arr[i][j];
	for (i = 0;i < n;i++)
		arr1[i] = arr[i][i];
	int max = arr1[0],maxIndex = -1;
	for (i = 1;i < n;i++) 
		if (max < arr1[i]) {
			max = arr1[i];
			maxIndex = i;
		}
	swap(arr, n, maxIndex);
	for (i = 0;i < n;i++) {
		for (j = 0;j < n;j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	for (i = 0;i < n;i++)
		delete[] arr[i];
	delete[]arr1;
	delete[]arr;
	return 0;
	
}
