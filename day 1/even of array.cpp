#include<iostream>
using namespace std;
main()
{
	int n,i;
	cout << "enter the array of size:";
	cin >> n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cout << "a[" << i <<"]:";
		cin >> a[i];
	}
	cout << "Even elements of an Array:";
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			cout << a[i] <<",";
		}
	}
}