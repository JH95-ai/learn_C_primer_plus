#include<iostream>
using namespace std;
int main() {
	long seconds;
	cout << "Enter the number of seconds: ";
	cin >> seconds;
	int minute, hour, day,second;
	minute = seconds / 60;
	hour = minute / 60;
	day = hour / 24;
	hour = hour % 24;
	minute = minute % 60;
	second = seconds % 60;
	cout << seconds << " seconds = " << day << " days, " << hour << " hour, " << minute << " minutes," << second << " seconds";
	return 0;
}