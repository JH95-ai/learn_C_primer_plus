#include<iostream>
#include<string>
using namespace std;
struct cars {
	string producer;
	int producer_year;
};
int main() {
	cout << "How many cars do you wish to catalog ? ";
	int car_count;
	cin >> car_count;
	cin.get();//清空缓存中的换行符
	cars *car = new cars[car_count];
	for (int i = 0; i < car_count; i++)
	{
		cout << "Car #" << i+1 << " : " << endl;
		cout << "Please enter the make: ";
		cin >> car[i].producer;
		cin.get();
		cout << "Please enter the year made: ";
		cin >> car[i].producer_year;
		cin.get();
	}
	cout << "Here is your collection: " << endl;;
	for (int i = 0; i < car_count; i++)
	{
		cout << car[i].producer_year << " " << car[i].producer << endl;
	}
	delete [] car;
	return 0;
}