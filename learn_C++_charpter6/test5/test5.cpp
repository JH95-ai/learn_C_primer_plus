#include<iostream>
#include<cctype>
using namespace std;
int main() {
	double tvarps;
	cout << "Please input tvarps: "<<endl;
	do {
		cin >> tvarps;
		if (tvarps > 5000 && tvarps < 15000)
			cout << "tax is: " << (tvarps - 5000) * 0.1 << endl;
		else if (tvarps > 15000 && tvarps < 35000)
			cout << "tax is: " << 10000 * 0.1 + (tvarps - 15000) * 0.15 << endl;
		else if (tvarps > 35000)
			cout << "tax is: " << 10000 * 0.1 + 20000 * 0.15 + (tvarps - 35000)*0.2 << endl;
		else {
			cout << "tax is: " << 0 << endl;
		}
	} while (tvarps > 0);
	cout << "Done! " << endl;
	return 0;
}