#include<iostream>
using namespace std;
class Car
{
	public:
	int car_id,car_release_year;
	string car_company_name,car_color,car_model;
};
main()
{
	Car a1;
	cout << "id:";
	cin >> a1.car_id;
	cout << "company name:";
	cin >> a1.car_company_name;
	cout << "color:";
	cin >> a1.car_color;
	cout << "model:";
	cin >> a1.car_model;
	cout << "release year:";
	cin >> a1.car_release_year;
	
	Car a2;
	cout << "id:";
	cin >> a2.car_id;
	cout << "company name:";
	cin >> a2.car_company_name;
	cout << "color:";
	cin >> a2.car_color;
	cout << "model:";
	cin >> a2.car_model;
	cout << "release year:";
	cin >> a2.car_release_year;
	
	Car a3;
	cout << "id:";
	cin >> a3.car_id;
	cout << "company name:";
	cin >> a3.car_company_name;
	cout << "color:";
	cin >> a3.car_color;
	cout << "model:";
	cin >> a3.car_model;
	cout << "release year:";
	cin >> a3.car_release_year;
	
	Car a4;
	cout << "id:";
	cin >> a4.car_id;
	cout << "company name:";
	cin >> a4.car_company_name;
	cout << "color:";
	cin >> a4.car_color;
	cout << "model:";
	cin >> a4.car_model;
	cout << "release year:";
	cin >> a4.car_release_year;
	
	cout << "id\t" << "company name\t" << "color\t" << "model\t" << "release year\t" << endl;
	cout << a1.car_id << "\t" <<a1.car_company_name <<"\t" << a1.car_color <<"\t" << a1.car_model <<"\t" << a1.car_release_year << endl;
	cout << a2.car_id << "\t" <<a2.car_company_name <<"\t" << a2.car_color <<"\t" << a2.car_model <<"\t" << a2.car_release_year << endl;
	cout << a3.car_id << "\t" <<a3.car_company_name <<"\t" << a3.car_color <<"\t" << a3.car_model <<"\t" << a3.car_release_year << endl;
	cout << a4.car_id << "\t" <<a4.car_company_name <<"\t" << a4.car_color <<"\t" << a4.car_model <<"\t" << a4.car_release_year << endl;
}