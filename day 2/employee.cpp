#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
	public:
	int emp_id,emp_age,emp_salary,emp_experience;
	string emp_name,emp_role,emp_city,emp_company_name;
};
main()
{
	Employee a1;
	cout << "id:";
	cin >> a1.emp_id;
	cin.ignore();
	cout << "name:";
	getline(cin, a1.emp_name);
	cout << "age:";
	cin >> a1.emp_age;
	cin.ignore();
	cout << "role:";
	getline(cin , a1.emp_role);
	cout << "salary:";
	cin >> a1.emp_salary;
	cin.ignore();
	cout << "city:";
	getline(cin , a1.emp_city);
	cout << "experience:";
	cin >> a1.emp_experience;
	cin.ignore();
	cout << "company name:";
	getline(cin , a1.emp_company_name);
	
	Employee a2;
	cout << "id:";
	cin >> a2.emp_id;
	cin.ignore();
	cout << "name:";
	getline(cin , a2.emp_name);
	cout << "age:";
	cin >> a2.emp_age;
	cin.ignore();
	cout << "role:";
	getline(cin , a2.emp_role);
	cout << "salary:";
	cin >> a1.emp_salary;
	cin.ignore();
	cout << "city:";
	getline(cin , a2.emp_city);
	cout << "experience:";
	cin >> a2.emp_experience;
	cin.ignore();
	cout << "company name:";
	getline(cin , a2.emp_company_name);
	
	Employee a3;
	cout << "id:";
	cin >> a3.emp_id;
	cin.ignore();
	cout << "name:";
	getline(cin , a3.emp_name);
	cout << "age:";
	cin >> a3.emp_age;
	cin.ignore();
	cout << "role:";
	getline(cin , a3.emp_role);
	cout << "salary:";
	cin >> a3.emp_salary;
	cin.ignore();
	cout << "city:";
	getline(cin , a3.emp_city);
	cout << "experience:";
	cin >> a3.emp_experience;
	cin.ignore();
	cout << "company name:";
	getline(cin , a3.emp_company_name);
	
	Employee a4;
	cout << "id:";
	cin >> a4.emp_id;
	cin.ignore();
	cout << "name:";
	getline(cin , a4.emp_name);
	cout << "age:";
	cin >> a4.emp_age;
	cin.ignore();
	cout << "role:";
	getline(cin , a4.emp_role);
	cout << "salary:";
	cin >> a4.emp_salary;
	cin.ignore();
	cout << "city:";
	getline(cin , a4.emp_city);
	cin >> a4.emp_experience;
	cin.ignore();
	cout << "company name:";
	getline(cin , a4.emp_company_name);
	
	Employee a5;
	cout << "id:";
	cin >> a5.emp_id;
	cin.ignore();
	cout << "name:";
	getline(cin , a5.emp_name);
	cout << "age:";
	cin >> a5.emp_age;
	cin.ignore();
	cout << "role:";
	getline(cin , a5.emp_role);
	cout << "salary:";
	cin >> a5.emp_salary;
	cin.ignore();
	cout << "city:";
	getline(cin , a5.emp_city);
	cout << "experience:";
	cin >> a5.emp_experience;
	cin.ignore();
	cout << "company name:";
	getline(cin , a5.emp_company_name);
	
	cout << "id\t" << "name\t" << "age\t" << "role\t" << "salary\t" << "city\t" << "experience\t" << "company name\t" << endl;
	cout << a1.emp_id << "\t" <<a1.emp_name <<"\t\t" << a1.emp_age <<"\t" << a1.emp_role <<"\t" << a1.emp_salary <<"\t" << a1.emp_city <<"\t" << a1.emp_experience <<"\t" << a1.emp_company_name << endl;
	cout << a2.emp_id << "\t" <<a2.emp_name <<"\t" << a2.emp_age <<"\t" << a2.emp_role <<"\t" << a2.emp_salary <<"\t" << a2.emp_city <<"\t" << a2.emp_experience <<"\t" << a2.emp_company_name << endl;
	cout << a3.emp_id << "\t" <<a3.emp_name <<"\t" << a3.emp_age <<"\t" << a3.emp_role <<"\t" << a3.emp_salary <<"\t" << a3.emp_city <<"\t" << a3.emp_experience <<"\t" << a3.emp_company_name << endl;
	cout << a4.emp_id << "\t" <<a4.emp_name <<"\t" << a4.emp_age <<"\t" << a4.emp_role <<"\t" << a4.emp_salary <<"\t" << a4.emp_city <<"\t" << a4.emp_experience <<"\t" << a4.emp_company_name << endl;
	cout << a5.emp_id << "\t" <<a5.emp_name <<"\t" << a5.emp_age <<"\t" << a5.emp_role <<"\t" << a5.emp_salary <<"\t" << a5.emp_city <<"\t" << a5.emp_experience <<"\t" << a5.emp_company_name << endl;
}
