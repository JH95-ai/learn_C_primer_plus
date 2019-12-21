#include<iostream>
#include<array>
using namespace std;
int main() {
	float a[3];
	cout << "first: ";
	cin >> a[0];
	cout << "second: ";
	cin >> a[1];
	cout << "third: ";
	cin >> a[2];
	cout << "mean: " << (a[0] + a[1] + a[2]) / 3 << endl;
	return 0;
}