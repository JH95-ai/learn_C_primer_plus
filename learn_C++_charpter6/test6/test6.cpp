#include<iostream>
using namespace std;
struct donation{
	char name[80];
	double money;
};
int main() {
	int donor;
	cout << "Please input donor numbers: " << endl;
	cin >> donor;
	cin.get();
	donation *dona = new donation[donor];
	cout << "Please input information. "<<endl;
	for (int i = 0; i < donor; i++)
	{
		cout << "Please input donor name: " << endl;
		cin.getline(dona[i].name,80);
		cout << "Please input donor money"<<endl;
		cin>>dona[i].money;
		cin.get();
	}
	int stand = 10000;
	cout << "> =10000 donor information is: " << endl;
	int n = 0;
	for (int i = 0; i < donor; ++i) {
		if (dona[i].money > stand)
		{
			cout << ">=10000 donor name is: " << dona[i].name << endl;
			cout << ">=10000 donor money is: " << dona[i].money << endl;	
			n++;
		}
	}
	if (n == 0)
		cout << "None Grand donor!";
	int m = 0;
	for (int i = 0; i < donor; ++i) {
		if (dona[i].money <= stand)
		{
			cout << "<=10000 donor name is: " << dona[i].name << endl;
			cout << "<=10000 donor money is: " << dona[i].money << endl;
			m++;
		}
	}
	if (m == 0)
		cout << "None donor!";
	delete dona;
	return 0;
}