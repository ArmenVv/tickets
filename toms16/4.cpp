#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char str[20][8], * word, a[200];
	cin.getline(a, 200, ':');
	word = strtok(a, ",");
	int i = 0, j, k,count=0;
	while (word != NULL) {
		strncpy(str[i], word, sizeof(str[i])-1);
		str[i][sizeof(str[i]) - 1] = '\0';
		i++;
		word = strtok(NULL, ",");
	}
	int *uniqueCount = new int[i];
	for (k = 0;k < i;k++)
		uniqueCount[k] = 0;
	for (j = 0;j < i;j++) {
		int len = strlen(str[j]);
		bool found = false;
		for (k = 0;k < len - 1;k++)
			if (str[j][k] == str[j][len - 1]) {
				found = true;
				break;
			}
		if (found) cout << str[j] << " ";
	}
	delete[]uniqueCount;
	return 0;


}