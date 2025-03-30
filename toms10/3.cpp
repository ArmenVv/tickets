#define _CRT_SECURE_NO_WARNINGS
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
	adrress adr;
	bool education;
};
void inputCitizens(INFO& u) {
	cin.ignore();
	cin.getline(u.surname, 20);
	cin.getline(u.name, 10);
	cin.getline(u.city, 10);
	cin.getline(u.adr.street, 10);
	cin >> u.adr.house;
	cin >> u.adr.appartment;
	cin >> u.education;
}
void outputCitizen(INFO&u) {
	cout << u.surname << endl;
}
int main() {
	int n, i, j;
	cin >> n;
	INFO* Citizen;
	bool found = false;
	Citizen = new INFO[n];
	for (i = 0;i < n;i++)
		inputCitizens(Citizen[i]);
	for (i = 0;i < n - 1;i++)
		for (j = i + 1;j < n;j++) {
			if (!strcmp(Citizen[i].adr.street, Citizen[j].adr.street) && strcmp(Citizen[i].city, Citizen[j].city)){ 
				outputCitizen(Citizen[i]);
				outputCitizen(Citizen[j]);
				found = true;
			}
		}
	if (!found) cout << "There are no such citizens" << endl;
	delete[] Citizen;
	return 0;

}
