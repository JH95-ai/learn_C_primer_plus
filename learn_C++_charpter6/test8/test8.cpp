#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
const int MAXSIZE = 80;
int main() {
	char filename[MAXSIZE];
	ifstream infile;
	cout << "Enter filename: " ;
	cin.get(filename, MAXSIZE);
	infile.open(filename);
	if (!infile.is_open())
	{
		cout << "Could not open the file " << filename << endl;
		exit(EXIT_FAILURE);
	}
	char value;
	int count = 0;
	infile >> value;
	while (infile.good()) {
		++count;
		infile >> value;
	}
	if (infile.eof())
		cout << "End of file reached.\n";
	else if (infile.fail())
		cout << "Input terminated by data mismatch.\n";
	else
		cout << "Input terminated for unknown reason.\n";
	if (count == 0)
		cout << "No data processed.\n";
	else {
		cout << "char : " << count << endl;
	}
	infile.close();
	return 0;
}
