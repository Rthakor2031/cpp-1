#include<iostream>
#include<string>
using namespace std;
class Student 
{
	private :
	int stu_id,stu_age;
	string stu_name,stu_course,stu_city,stu_email,stu_college;
	
	public:
	void setter()
	{
		cout << endl << "enter the student id:";
		cin >> stu_id;
		cin.ignore();
		cout << "enter the student name:";
		getline(cin,stu_name);
		cout << "enter the student age:";
		cin >> stu_age;
		cin.ignore();
		cout << "enter the student course:";
		getline(cin,stu_course);
		cout << "enter the student city:";
		cin >> stu_city;
		cout << "enter the student email id:";
		cin >> stu_email;
		cin.ignore();
		cout << "enter the student college:";
		getline(cin,stu_college);
	}
	void getter()
	{
		cout << endl << "id:" << stu_id << endl << " name:" << stu_name << endl << " age:" << stu_age << endl << " course:" << stu_course << endl << " city:" << stu_city << endl << " email:" << stu_email << endl << " college:" << stu_college << endl ; 
	}
};
int main()
{
	Student s1[5];
	for(int i=0;i<5;i++)
	{
		s1[i].setter();
	}
	for(int i=0;i<5;i++)
	{
		s1[i].getter();
	}
}