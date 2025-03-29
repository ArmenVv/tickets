#include <iostream>
using namespace std;
struct date {
	int day;
	int month;
	int year;
};
struct WORKER {
	char surname[20];
	char name[10];
	char position[10];
	int salary;
	date d;


};
void inputWorkers(WORKER&k) {
	cin.ignore();
	cin.getline(k.surname, 20);
	cin.getline(k.name, 10);
	cin.getline(k.position, 10);
	cin >> k.salary;
	cin >> k.d.day;
	cin >> k.d.month;
	cin >> k.d.year;
}
bool check(WORKER&k) {
	if (k.d.year > 1980 && k.salary < 100000)
		return true;
	return false;
}
void outputWorkers(WORKER &k) {
	cout << k.surname << " " << k.name << " " << k.position << " "
		<< k.salary << " " << k.d.day << " " << k.d.month << " " << k.d.year << endl;

}
int main() {
	const int n = 3;
	WORKER Table[n];
	for (int i = 0;i < n;i++)
		inputWorkers(Table[i]);
	for (int i = 0;i < n;i++) {
		if (check(Table[i]))
			outputWorkers(Table[i]);
	}

}