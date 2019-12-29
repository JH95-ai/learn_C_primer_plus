#include<iostream>
const int strsize = 80;
const int number = 5;
using namespace std;
struct bop {
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int perference;
};
bop people[number] = {
	   {
		   "Wimp Macho",
		   "BOSS",
		   "WM",
		   0
	   },
	   {
		   "Raki Rhodes",
		   "Manager",
		   "Junior Programmer",
		   2
	   },
	   {
		   "Celia Laiter",
		   "MIPS",
		   "CL",
		   1
	   },
	   {
		   "Hoppy Hipman",
		   "Analyst Trainee",
		   "AT",
		   1
	   },
	   {
		   "Pat Hand",
		   "Student",
		   "LOOPY",
		   2
	   }
};
void showmenu();
void show_a();
void show_b();
void show_c();
void show_d();
void showmenu() {
	cout << "Benevolent Order of Programmers Report\n"
		<< "a.display by name	b.display by title\n"
		<< "c.display by bopname	d.display by preference\n"
		<< "q.quit\n";
}
void show_a() {
	for (int i = 0; i < number; i++)
		cout << people[i].fullname << endl;
}
void show_b()
{
	for (int i = 0; i < number; i++)
		cout << people[i].title << endl;	
}
void show_c() {
	for (int i = 0; i < number; i++)
		cout << people[i].bopname << endl;
}
void show_d() {
	for (int i = 0; i < number; i++)
	{
		if (people[i].perference == 0)
			cout << people[i].fullname << endl;
		if (people[i].perference == 1)
			cout << people[i].title << endl;
		if (people[i].perference == 2)
			cout << people[i].bopname << endl;
	}
}

int main() {
	showmenu();
	cout << "Enter your choice: " << endl;
	char ch;
	do {
		cin >> ch;
		switch (ch)
		{
		case 'a':show_a(); break;
		case 'b':show_b(); break;
		case 'c':show_c(); break;
		case 'd':show_d(); break;
	
		}
		if (ch != 'q')
			cout << "Next choice: ";
	} while (ch != 'q');
	cout << "Bye! " << endl;
	return 0;
}