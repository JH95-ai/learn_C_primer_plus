#include<iostream>
using namespace std;
struct CandyBar {
	char name[20];
	float weight;
	int kluli;
};
int main() {
	CandyBar snack = { "Mocha Munch",2.3,250 };
	cout << "struct initial value is : " << snack.name << " " << snack.weight << " " << snack.kluli;
	return 0;
}