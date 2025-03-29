#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <cassert>
using namespace std;
int main() {
	char str[30][5], * word, k[180];
	int i = 0, j;
	cin.getline(k, 180, '.');
	word = strtok(k, ",");
	while (word != NULL) {
		strncpy(str[i], word, 4);
		str[i][4] = '\0';
		i++;
		word = strtok(NULL, ",");
	}
	for(j = 0;j < i;j++) {
		for (int k = 3;k >= 0;k--)
			str[j][k + 1] = str[j][k];
		str[j][0] = 'a';
		
	}
	for (int k = 0;k < i;k++)
		cout << str[k] << endl;

	return 0;
}