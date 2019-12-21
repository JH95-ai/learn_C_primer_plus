#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char fist_name[20];
	char last_name[20];
	cout << "Enter your first name: ";
	cin.getline(fist_name, 20);
	cout << "Enter your last name: ";
	cin.getline(last_name, 20);
	cout << "Here's the information in a single string: " << fist_name << ", " << last_name;
	return 0;
}
