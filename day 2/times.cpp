#include<iostream>
using namespace std;
main()
{
	int sec;
	cout << "enter the seconds:";
	cin >> sec;
	int hour = sec/3600;
	int min=sec/60;
	sec=sec%60;
	min=min%60;
	cout << hour<<":"<<min<<":"<<sec;
}
