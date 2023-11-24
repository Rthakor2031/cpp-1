#include<iostream>
#include<string>

using namespace std;

class Hotel
{
	private:
	int cafe_ratting,cafe_staff_quantity,cafe_establish_year,cafe_id;
	string cafe_type,cafe_location,cafe_name;
	public:
		void setter()
		{
			cout << "enter the id:";
			cin >> cafe_id;
			cout << "enter the name:";
			getline(cin >> ws,cafe_name);
			cout << "enter the type (like hotel or motel):";
			getline(cin >> ws,cafe_type);
			cout << "enter the ratting(like 1 Star, 2 Start, ..., 7 Star):";
			cin >> cafe_ratting;
			cout << "enter the location:";
			getline(cin >> ws,cafe_location);
			cout << "enter the cafe establish year:";
			cin >> cafe_establish_year;
			cout << "enter the staff quantity:";
			cin >> cafe_staff_quantity;
		}
		void getter()
		{
			cout << cafe_id << endl << cafe_name << endl << cafe_type 
			<< endl << cafe_ratting << endl << cafe_location << endl 
			<< cafe_establish_year<< endl << cafe_staff_quantity; 
		}
		Hotel() 
		{
			cout<<endl<<"cool cafe"<<endl<<endl;
		}
		~Hotel()
		{
			cout <<endl<<"thank you"<<endl<<endl;
		}
};
int main()
{
	

	int i,n;
	cout << "enter the member:";
	cin >> n;
	
	for(i=0;i<n;i++)
	{
		Hotel h1;
		h1.setter();
		h1.getter();
	}
	
	
	return 0;
}