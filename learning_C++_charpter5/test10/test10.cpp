#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter number of rows: ";
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		for (int j = num - 1; j > i; j--)
		{
			cout << ".";
		}
		for (int k = 0; k <= i; k++)
		{
			cout << "*";
		}
		cout << "\n"; 
	}
	system("pause");
	return 0;
}