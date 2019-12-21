#include<iostream>
using namespace std;
double equalment(int value) {
	double temp;
	temp = value * 1.8 + 32.0;
	return temp;
}
int main() {
	cout << "Please enter a Celsius value:";
	int value;
	cin >> value;
	cout << value << " degrees Celsius is " << equalment(value)<< " degrees Fahrenheit" << endl;
	return 0;
}