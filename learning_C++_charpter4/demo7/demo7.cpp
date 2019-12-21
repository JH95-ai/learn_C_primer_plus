#include<iostream>
using namespace std;
struct Wingate {
	char name[30];
	float d;
	float weight;
};
int main() {
	Wingate demo;
	cout << "Enter company: ";
	cin >> demo.name;
	cout << "Enter diameter: ";
	cin >> demo.d;
	cout << "Enter weight: ";
	cin >> demo.weight;
	cout << "Detail information is : " << demo.name << " " << demo.d << " " << demo.weight;
	return 0;
}