#include<iostream>
#include<string>

using namespace std;

class Hotel
{
	private:
	static int hotel_establish_year,hotel_id;
	static string hotel_name;
	int hotel_ratting,hotel_staff_quantity,hotel_room_quantity;
	string hotel_type,hotel_location;
	public:
		void setter()
		{
			cout << "enter the ratting(like 1 Star, 2 Start, ..., 7 Star):";
			cin >> hotel_ratting;
			cout << "enter the type (like hotel or motel):";
			cin >> hotel_type;
			cout << "enter the location:";
			cin >> hotel_location;
			cout << "enter the staff quantity:";
			cin >> hotel_staff_quantity;
			cout << "enter the room quantity:";
			cin >> hotel_room_quantity;
		}
		void getter()
		{
			cout << hotel_id << endl << hotel_name << endl << hotel_type << endl << hotel_ratting << endl << hotel_location << endl << hotel_establish_year << endl << hotel_establish_year << endl << hotel_staff_quantity << endl << hotel_room_quantity; 
		}
};


string Hotel :: hotel_name = "rnw";
int Hotel :: hotel_id = 424 ,hotel_establish_year = 2024;


main()
{
	int i,j;
	cout << "enter the member:";
	cin >> i;
	Hotel h1[i];
	
	for(j=0;j<i;j++)
	{
		h1[i].setter();
		cout << endl;
	}
	
	for(j=0;j<i;j++)
	{
		h1[i].getter();
		cout << endl;
	}
}