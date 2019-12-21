#include<iostream>
using namespace std;
int main() {
	char first_name[30];
	char last_name[30];
	char letter;
	int age;
	cout << "What is your first name?" << endl;
	cin >> first_name;
	cout << "What is your last name?" << endl;
	cin >> last_name;
	cout << "What letter grade do you deserve?" << endl;
	cin >> letter;
	cout << "What is your age?" << endl;
	cin >> age;
	cout << "Name: " << first_name << " , " << last_name << endl;
	cout << "Grade: " << char(letter + 1 )<< endl;
	cout << "Age:" << age << endl;
	return 0;
}