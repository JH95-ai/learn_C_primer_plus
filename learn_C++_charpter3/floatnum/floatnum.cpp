#include<iostream>
using namespace std;
int main() {
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tub = 10.0 / 3.0;
	double mint = 10.0 / 3.0;
	const float millions = 1.0e6;
	cout << "tub = " << tub;
	cout << ", a million tub = " << millions * tub;
	cout << ",\nand ten million tubs = ";
	cout << 10 * millions*tub << endl;
	cout << "mint = " << mint << " and a millon mints = ";
	cout << millions * mint << endl;
	return 0;
}