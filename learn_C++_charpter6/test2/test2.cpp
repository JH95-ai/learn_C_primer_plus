#include<iostream>
#include<cctype>
#include<array>
const int MAXSIZE = 5;
using namespace std;
int main() {
	array <double, MAXSIZE> donation;
	cout << "Input ten numbers: " << endl;
	int i;
	int count = 0;
	int temp=0;
	for (i = 0; i < MAXSIZE; i++)
	{
		cin >> donation[i];
		temp += donation[i];
	}
	int average;
	int n = 0;
	average = temp / MAXSIZE;
	cout << "average is :" << average << endl;
	for (int j = 0; j < MAXSIZE; j++)
	{
		if (donation[j] > average)
			n++;
	}
	cout << "bigger than average have : " << n << " numbers.";
	return 0;
}