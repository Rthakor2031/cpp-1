#include<iostream>
#include<string>
using namespace std;
class Customer 
{
	private :
	int cust_id,cust_age,cust_mobile_number,cust_simcard_validity;
	string cust_name,cust_city,cust_telecom_brand_name;
	
	public:
	void setter()
	{
		cout << endl << "enter the customer id:";
		cin >> cust_id;
		cin.ignore();
		cout << "enter the customer name:";
		getline(cin,cust_name);
		cout << "enter the customer age:";
		cin >> cust_age;
		cout << "enter the customer city:";
		cin >> cust_city;
		cout << "enter the customer mobile number:";
		cin >> cust_mobile_number;
		cout << "enter the simcard validity (in years):";
		cin >> cust_simcard_validity;
		cout << "enter the customer telecom brand name (like Jio, Airtel, Vi, etc.):";
		cin >> cust_telecom_brand_name;
	}
	void getter()
	{
		cout << endl << "id:" << cust_id << endl << " name:" << cust_name << endl << " age:" << cust_age << endl << " city:" << cust_city << endl << " mobile number:" << cust_mobile_number << endl << " telecom brand name:" << cust_telecom_brand_name << endl ; 
	}
};
int main()
{
	Customer c1[5];
	for(int i=0;i<5;i++)
	{
		c1[i].setter();
	}
	for(int i=0;i<5;i++)
	{
		c1[i].getter();
	}
}