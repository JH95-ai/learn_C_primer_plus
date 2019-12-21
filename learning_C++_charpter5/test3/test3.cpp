#include<iostream>
using namespace std;
int main() {
	int input;
	int count = 0;
	cout << "Enter one number :";
	cin >> input;
	count += input;
	cout << "total number is: " << count << endl;
	while (input != 0) 
	{
		cout << "Enter one number :";
		cin >> input;
		count += input;
		cout << "total number is: " << count << endl;
	}
	return 0;
}