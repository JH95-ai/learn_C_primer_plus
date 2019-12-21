#include<iostream>
#include<string>
const int year = 3;
const int month = 12;
using namespace std;
int main() {
	string prmt[] =
	{ "January","February","March","April",
		"May","June","July","August",
		"September","October","November","December"
	};
	int limit[year][month];
	int all[3] = { 0,0,0 };
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 12; i++) {
			cout << "limit " << prmt[i] << " is: ";
			cin >> limit[j][i];
			all[j] += limit[j][i];
		}
		cout << "this "<<j+1<<" year total limit is: " << all[j] << endl;
	}
	cout << "this three year total limit is: " << all[0] + all[1] + all[2] << endl;
	return 0;
}