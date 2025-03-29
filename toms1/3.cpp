#define CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
struct BOOK {
	char author_name[10];
	char author_surname[20];
	char book_name[20];
	char genre[10];
	char production[20];
	int prod_year;
	int pages_num;

};
void inputBook(BOOK& k) {
	cin.getline(k.author_name, 10);
	cin.getline(k.author_surname, 20);
	cin.getline(k.book_name, 20);
	cin.getline(k.genre, 10);
	cin.getline(k.production, 20);
	cin >> k.prod_year;
	cin >> k.pages_num;
	cin.ignore();
}
bool Tumanyan_2011(BOOK& k) {
	if (strcmp(k.author_surname, "Tumanyan") == 0 && k.prod_year == 2011)
		return true;
	return false;
}
int main() {
	const int n = 3;
	bool found = false;
	BOOK Library[n];
	int i;
	for (i = 0;i < n;i++) {
		inputBook(Library[i]);
	}
	for (i = 0;i < n;i++) {
		if (Tumanyan_2011(Library[i])) {
			cout << Library[i].author_name << " " << Library[i].author_surname << " " << Library[i].book_name << " " << Library[i].genre << " " << Library[i].production << " " << Library[i].prod_year << " " << Library[i].pages_num << endl;
			found = true;
		}
	}
	if (!found) cout << "There are no such books!" << endl;
	return 0;
}