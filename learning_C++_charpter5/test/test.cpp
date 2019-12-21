#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int i, j;
	cout << "Enter first number: ";
	cin >> i;
	cout << "Enter second number: ";
	cin >> j;
	int count = 0;
	while (i > j)
	{
		cout << "Error input! please input again!";
		break;
	}
	for (i, j; i <= j; i++)
	{
		count += i;
		//cout << count << endl;
	}
	cout << count << endl;
	return 0;
}	