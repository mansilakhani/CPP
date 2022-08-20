/*
A Global survey held to collect information about
hotels all around the world. Provide a C++ solution to
create a class Hotel with fields like

hotel_id
hotel_name
hotel_type
hotel_staff_size
hotel_room_size
hotel_establish_year
hotel_country
hotel_rating_type
hotel_website

Illustrate the use of strict encapsulation with this
keyword.

*/


#include<iostream>
#include<string.h>
using namespace std;

class Hotel
{
	private:
	     int hotel_id;
		char hotel_name[100];
		char hotel_type[100];
		char hotel_staff_size[100];
		int hotel_room_size;
		int hotel_establish_year;
		char hotel_country[100];
		int hotel_rating_type;
		char hotel_website[100];
		
	public:
		
		void Hotel_setData()
		{
			cout <<endl<<"Enter Hotel Id : ";
			cin  >>this->hotel_id;
			cout <<"Enter Hotel Name : ";
			cin  >>this->hotel_name;
			cout <<"Enter Hotel Type : ";
			cin  >>this->hotel_type;
			cout <<"Enter Hotel Staff size : ";
			cin  >>this->hotel_staff_size;
			cout <<"Enter Hotel Room size : ";
			cin  >>this->hotel_room_size;
			cout <<"Enter Hotel Established year : ";
			cin  >>this->hotel_establish_year;
			cout <<"Enter Hotel Country : ";
			cin  >>this->hotel_country;
			cout <<"Enter Hotel Rating type : ";
			cin  >>this->hotel_rating_type;
			cout <<"Enter Hotel website : ";
			cin  >>this->hotel_website;
		}
		
		void Hotel_getData()
		{
			cout <<endl<<"------ -: Enter Hotel Details :- ------"<<endl
				 <<" ID : "<<this->hotel_id <<endl
				 <<" Name : "<<this->hotel_name <<endl
				 <<" Type : "<<this->hotel_type <<endl
				 <<" Staff size : "<<this->hotel_staff_size <<endl
				 <<" Room size : "<<this->hotel_room_size <<endl
				 <<" Established year  : "<<this->hotel_establish_year <<endl
				 <<" Country : "<<this->hotel_country <<endl
				 <<" Rating type : "<<this->hotel_rating_type <<endl
				 <<" website : "<<this->hotel_website <<endl;
		}
};


int main()
{
	Hotel h[100];
	
	int i,n;
	cout <<endl<<" How many Hotel information : ";
	cin  >>n;
	
	for(i=0;i<n;i++)
	{
		h[i].Hotel_setData();
	}
	for(i=0;i<n;i++)
	{
		h[i].Hotel_getData();
	}
	return 0;
}
