#include<iostream>
#include<string>
using namespace std;
int main() {
	string prmt[] =
	{ "January","February","March","April",
		"May","June","July","August",
		"September","October","November","December"
	};
	int limit_array[12];
	int all = 0;
	for (int i = 0; i <12; i++)
	{
		cout << "���������۶�:"<<prmt[i]<<":\n";
		cin >> limit_array[i];
		//cout << "��" << i << "�����۶�Ϊ: " << limit << endl;
		all += limit_array[i];
		
	}
	//cout <<int(limit_array) << endl;
	cout << "����������۶�Ϊ: " << all << endl;
	//system("pause");
	return 0;
}