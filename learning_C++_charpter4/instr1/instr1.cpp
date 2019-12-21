#include <iostream>
using namespace std;
int main() {
	const int Arsize = 20;
	char name[Arsize];
	char dessert[Arsize];
	cout << "Enter your name: \n";
	cin >> name;
	cout << "Enter your favorite dessert:\n";
	cin >> dessert;
	cout << "I have so many" << dessert << "for you" << name << endl;
	return 0;

}