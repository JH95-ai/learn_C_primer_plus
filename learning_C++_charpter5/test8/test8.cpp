#include<iostream>
#include<cstring>
const int MAXSIZE = 100;
using namespace std;
int main() {
	cout << "Enter words (to stop , type the word done): " << endl;
	char input[MAXSIZE];
	cin.get(input, MAXSIZE);
	int count = 0;
	for (int i = 0; i < MAXSIZE; i++)
	{
		if (input[i] == ' ')
			count++;
		else if ((input[i] == 'd') && (input[i + 1] == 'o') && (input[i + 2] == 'n') && (input[i + 3] == 'e'))
			break;
		else
		{

		}
	}
	cout << "Your entered a total of " << count << " words.";

	return 0;
}