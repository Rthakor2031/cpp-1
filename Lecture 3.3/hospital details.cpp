#include<iostream>
#include<string>
using namespace std;
class Hospital
{
	private:
	static int helplinenumber;
	static string date;
	long int phone;
	int min=10;
	string patientname,disease;
	
	public:
	static int time;
	void setter()
	{
		cout << "enter the patient name:";
		getline(cin >> ws,patientname);
		cout << "enter the disease:";
		getline(cin >> ws,disease);
		cout << "enter the phone number:";
		cin >> phone;
	}
	void getter()
	{
		cout << endl << patientname << endl << phone << endl << date <<" "<<min<<":"<< time << endl;
	}
	Hospital()
	{
		cout << endl << "sivil hospital" <<endl;
	}
	~Hospital()
	{
		cout << endl << "take your self" <<endl<<endl;
	}
};
int Hospital::time=0;
string Hospital::date="25/11/23";
int Hospital::helplinenumber=108;
main()
{
	int i,n;
	cout << "enter the member:";
	cin >> n;
	
	for(i=0;i<n;i++)
	{
		Hospital h1;
		h1.setter();
		h1.getter();
		Hospital::time+=10;
	}
}
