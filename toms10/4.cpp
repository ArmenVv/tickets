#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cassert>
#include <cstring>
using namespace std;
int main() {
	char str[20][8], * word, a[200];
	int i=0, j;
	cin.getline(a, 200, '.');
	word = strtok(a, ";");
	while (word != NULL) {
		strncpy(str[i], word, 7);
		str[i][7] = '\0';
		i++;
		word = strtok(NULL, ";");
	}
	for (int k = 0;k < i;k++) {
		char newW[30] = "Hello";
		if (strstr(str[k], "a") == NULL) {
			cout << strcat(newW, str[k]) << endl;
		}
	}
	return 0;
}