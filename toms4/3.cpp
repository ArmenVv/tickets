#include <iostream>
#include <cstring>
using namespace std;
struct adrress {
	char street[20];
	int house;
	int appartment;
};
struct INFO {
	char surname[20];
	char name[10];
	char city[10];
	char education[20];
	adrress adr;
};
void inputUsers(INFO& k) {
	cin.getline(k.surname, 20);
	cin.getline(k.name, 10);
	cin.getline(k.city, 10);
	cin.getline(k.education, 20);
	cin.getline(k.adr.street, 20);
	cin >> k.adr.house;
	cin >> k.adr.appartment;
	cin.ignore();
}
void outputUsers(INFO& k) {
	cout << k.surname << " " << k.name << " " << k.city << " " << k.adr.street << " " << k.adr.house << " " << k.adr.appartment << endl;

}
int main() {
	const int n = 3;
	INFO Citizen[n];
	for (int i = 0;i < n;i++)
		inputUsers(Citizen[i]);
	for (int i = 0;i < n;i++)
		if (strcmp(Citizen[i].city, "Yerevan") == 0 && strcmp(Citizen[i].education, "Graduate") == 0)
			outputUsers(Citizen[i]);
	return 0;
}