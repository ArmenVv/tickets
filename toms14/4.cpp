#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str[20][8], * word, a[200];
	int i = 0, j;
	cin.getline(a, 200, ':');
	word = strtok(a, ",");
	while (word != NULL) {
		strncpy(str[i], word, 7);
		str[i][7] = '\0';
		i++;
		word = strtok(NULL, ",");
	}
	char max_length[8];
	strcpy(max_length, str[0]);
	for (j = 1;j < i;j++) {
		if (strlen(max_length) < strlen(str[j]))
			strcpy(max_length, str[j]);
	}
	cout << max_length;
	return 0;
}