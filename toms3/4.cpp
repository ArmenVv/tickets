#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cassert>
#include <cstring>
using namespace std;
int main() {
	char str[20][7], * word, a[180];
	int i = 0, j;
	cin.getline(a, 180, '.');
	word = strtok(a, ",");
	while (word != NULL) {
		strncpy(str[i], word, 6);
		str[i][6] = '\0';
		i++;
		word = strtok(NULL, ",");
	}
	for (j = 0;j < i;j++) {
		char *found = strstr(str[j], "abc");
		if (found) cout << str[j];
		else continue;
	}
	return 0;
}