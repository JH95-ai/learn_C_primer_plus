#include<iostream>
#include<cctype>
const int MAXSIZE = 50;
using namespace std;
int main() {
	char ch[MAXSIZE];
	cout << "Please input some letter,we will change it! " << endl;
	cin.get(ch,MAXSIZE);
	cout << "input letter is: " << ch << endl;
	for (int i=0; ch[i] !='\0'; ++i)
	{
		if (ch[i] == '@')
			continue;
		else if (isdigit(ch[i]))
			continue;
		else if (islower(ch[i]))
		{
			cout  << char(toupper(ch[i])) ;
		}
		else if(isupper(ch[i]))
		{
			cout<< char(tolower(ch[i]));
		}
	}
	return 0;
}