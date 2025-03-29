			#define _CRT_SECURE_NO_WARNINGS
			#include <iostream>
			#include <cassert>
			#include <cstring>
			using namespace std;
			int main() {
				char str[30][8], * word, k[300];
				int i = 0, m;
				cin >> m;
				cin.getline(k, 300, '.');
				word = strtok(k, " ");
				while (word != NULL) {
					strcpy(str[i], word);
					i++;
					word = strtok(NULL, " ");
				}
				for (int j = 0;j < i;j++)
					if (strlen(str[j]) == m)
						cout << str[j] << " ";
				return 0;

			}