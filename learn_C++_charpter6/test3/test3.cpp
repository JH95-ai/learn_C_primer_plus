#include<iostream>
using namespace std;
int main() {
	cout << "Please enter one of following choices:\n"
		<< "c) c		p) p\n"
		<< "t)t		g) g\n";
	char ch;

	do{
		cout << "Please enter a c,p,t,or g: ";
		cin>>ch;
		switch (ch)
		{
			case 'c':cout << "c is case" << endl; break;
			case 'p':cout << "p is case" << endl; break;
			case 't':cout << "t is case " << endl; break;
			case 'g':cout << "g is case" << endl; break;
			default:
				cout <<"Please enter a c,p,t,or g: " << endl;	
		}
	} while ((ch != 'c') && (ch != 'p') && (ch != 't') && ch != 'g');
	return 0;
}