#include <iostream>
#include <cstring>
using namespace std;
struct BOOK {
	char author_surname[20];
	char author_name[10];
	char book_name[10];
	int year;
	int pages;
	bool digital;
};
void inputBooks(BOOK&k) {
	cin.ignore();
	cin.getline(k.author_surname, 20);
	cin.getline(k.author_name, 10);
	cin.getline(k.book_name, 10);
	cin >> k.year;
	cin >> k.pages;
	cin >> k.digital;
}
void outputBooks(BOOK& k) {
	cout << k.author_surname << " " << k.book_name << endl;
	
}
int main() {
	const int n = 3;
	BOOK Library[n];
	for (int i = 0;i < n;i++)
		inputBooks(Library[i]);
	for (int i = 0;i < n;i++)
		if (Library[i].year > 2000 && Library[i].digital)
			outputBooks(Library[i]);
	return 0;

			

}