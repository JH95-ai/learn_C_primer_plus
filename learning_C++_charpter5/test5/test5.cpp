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
		cout << "请输入销售额:"<<prmt[i]<<":\n";
		cin >> limit_array[i];
		//cout << "第" << i << "月销售额为: " << limit << endl;
		all += limit_array[i];
		
	}
	//cout <<int(limit_array) << endl;
	cout << "该年度总销售额为: " << all << endl;
	//system("pause");
	return 0;
}