#include<iostream>
#include<string>
#include<cstring>
using namespace std;
struct Wingate {
	char name[20];
	float d;
	float weight;
};
int main() {
	Wingate *demo=new Wingate;
	cout << "Enter diameter: ";
	cin >> demo->d;
	cout << "Enter company: ";
	cin >> demo->name;
	cout << "Enter weight: ";
	cin >> demo->weight;
	cout << "Detail information is : " << demo->name << " " << demo->d << " " << demo->weight;
	delete[] demo;
	return 0;
}