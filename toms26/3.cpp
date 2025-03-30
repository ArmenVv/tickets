#include <iostream>
#include <cstring>
#include <cassert>
using namespace std;
struct TV {
	char model[20];
	char country[10];
	char market[10];
	int diagonal;
};
void inputTv(TV&u) {
	cin.ignore();
	cin.getline(u.model, 20);
	cin.getline(u.country, 10);
	cin.getline(u.market, 10);
	cin >> u.diagonal;
}
void outputTv(TV&u) {
	cout << u.market << endl;

}
int main() {
	const int n = 3;
	char* searchModel = new char[10];
	cin.getline(searchModel, 10);
	assert(searchModel);
	TV TVDBase[n];
	for (int i = 0;i < n;i++)
		inputTv(TVDBase[i]);
	bool found = false;
	for (int i = 0;i < n;i++)
		if (!strcmp(TVDBase[i].model, searchModel) && TVDBase[i].diagonal < 54) {
			outputTv(TVDBase[i]);
			found = false;
		}
	if (!found) cout << "There are no such TVs";
	delete[]searchModel;
	return 0;
}