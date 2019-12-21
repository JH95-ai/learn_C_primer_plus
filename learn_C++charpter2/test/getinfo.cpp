#include <iostream>
using namespace std;
int main()
{	
    int carrotss;
	cout << "How many carrots do you have?" << endl;
	cin >> carrotss;
	cout << "Here are two more.";
	carrotss = carrotss + 2;
	cout << "Now you have " << carrotss << " carrots." << endl;
	return 0;
}