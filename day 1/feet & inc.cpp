#include<iostream>
using namespace std;
main()
{
	int feet,inc;
	cout << "enter the feet::";
	cin >> feet;
	cout << "enter the inches:";
	cin >> inc;
	
	cout << "feet:" <<feet  + inc/12 << endl << "inch:"<<inc%12;
}