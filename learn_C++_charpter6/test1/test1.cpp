#include<iostream>
#include<cctype>
using namespace std;
int main() {
	char ch;
	cout << "Enter text,and type @ to terminate input.\n";
	cin.get(ch);
	while (ch != '@')
	{
		if (isdigit(ch));
		else if (isalpha(ch))
		{
			if (isupper(ch))
			{
				ch = tolower(ch);
				cout << ch;
			}
			else {
				ch = toupper(ch);
				cout << ch;
			}
		}
		else
			cout << ch;
		cin.get(ch);
	}
	cout << "Done!" << endl;
	return 0;
}