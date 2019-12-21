#include<iostream>
#include<array>
using namespace std;
const int Arsize = 101;
int main() {
	array <long double,Arsize> factorials;
	factorials[1] = factorials[0] = 1LL;
	for (int i = 2; i < Arsize; i++)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i < Arsize; i++)
	{
		//cout << i << "! = " << factorials[i] << endl;
	}
	cout << "100! is " << factorials[Arsize-1] << endl;
	return 0;
}