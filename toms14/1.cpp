#include <iostream>
using namespace std;
bool check(int a[], int n) {
	int count = 0, i;
	for (i = 0;i < n;i++) {
		int temp = a[i];
		while (temp > 0) {
			if (temp % 16 == 10) {
				count++;
				break;
			}
			else temp /= 16;
		}
	}
	return count >= 2;
}
int main() {
	const int n = 3, m = 4;
	int arr1[n][m],i,j,temp[n];
	bool arr2[m];
	for (i = 0;i < n;i++)
		for (j = 0;j < m;j++)
			cin >> arr1[i][j];
	for (j = 0;j < m;j++) {
		for (i = 0;i < n;i++)
			temp[i] = arr1[i][j];
		if (check(temp, n))
			arr2[j] = true;
		else arr2[j] = false;
	}
	for (i = 0;i < m;i++)
		cout << arr2[i] << " ";
	return 0;
}