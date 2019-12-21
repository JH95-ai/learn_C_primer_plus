#include<iostream>
#include<string>
using namespace std;
int main() {
	//const int ArSize = 20;
	//char name[ArSize];
	//char dessert[ArSize];
	string name;
	string dessert;
	cout << "Enter your name:\n";
	cin >> name;
	//cin.getline(name, ArSize);
	cout << "Enter your favorite dessert:\n";
	cin >> dessert;
	//cin.getline(dessert, ArSize);
	cout << "I have so many " << dessert << " for you " << name << endl;
	return 0;
}