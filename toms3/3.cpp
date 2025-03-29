#include <iostream>
using namespace std;
struct date {
	int day;
	int month;
	int year;
};
struct NOTE {
	char surname[20];
	char name[10];
	char email[20];
	int number;
	date d;
};
void inputUsers(NOTE& user) {
	cin.ignore();
	cin.getline(user.surname, 20);
	cin.getline(user.name, 10);
	cin.getline(user.email, 20);
	cin >> user.number;
	cin >> user.d.day;
	cin >> user.d.month;
	cin >> user.d.year;
}
void outputUsers(NOTE& user) {
	cout << user.surname << " " << user.name << " " << user.email <<
		" " << user.number << " " << user.d.day << " " << user.d.month <<
		" " << user.d.year << endl;
}
int main() {
	const int n = 5;
	NOTE Notebook[n];
	int promptMonth;
	bool found = false;
	cin >> promptMonth;
	for (int i = 0;i < n;i++)
		inputUsers(Notebook[i]);
	for (int i = 0;i < n;i++)
		if (promptMonth == Notebook[i].d.month) {
			found = true;
			outputUsers(Notebook[i]);
		}
	if (!found) cout << "There are no such users" << endl;
	return 0;

}