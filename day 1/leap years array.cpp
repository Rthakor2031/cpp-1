#include<iostream>
using namespace std;
main()
{
	int n,m,i;
	cout << "enter the first num:";
	cin >> n;
	cout << "enter the second num:";
	cin >> m;
	int j=0,a[((m-n)/4)+1];
	for(i=n;i<=m;i++)
	{
		if(i%4==0)
		{
			a[j]=i;
			j++;
		}
	}
	for(i=0;i<((m-n)/4)+1;i++)
	{
		cout << a[i]<<endl;
	}
	
}