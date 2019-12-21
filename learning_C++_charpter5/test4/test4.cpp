#include<iostream>
using namespace std;
const int first_money=100;
int main() {
	double person_one, person_two;
	person_one = first_money * 0.1;
	person_two = first_money * 0.05;
	double count_one=first_money;
	double count_two = first_money;
	int i=1;
	count_one += person_one;
	count_two += person_two;
	while(count_one>count_two)
	{
		i++;
		person_one = first_money * 0.1;
		person_two = count_two * 0.05;
		count_one += person_one;
		count_two += person_two;
		//cout << "count_one is: " << count_one << endl;
		//cout << "count_two is: " << count_two << endl;
		//cout << "year is: " << i << endl;
	}
	while (count_one < count_two)
	{
		cout << "count_one is: " << count_one << endl;
		cout << "count_two is: " << count_two << endl;
		cout << "year is: " << i << endl;
		break;
	}
	return 0;
}