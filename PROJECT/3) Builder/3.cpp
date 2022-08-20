/* 	WAP to create a class Hotel with fields like id, name, type,
	staff_size, room_size, establish_year, address, rating_type and website.
	Illustrate the use of encapsulation (strict encapsulation) with this
	keyword.
*/

#include<iostream>
using namespace std;

class Hotel
{
	private:
		int hotel_id;
		char hotel_name[100];
		char hotel_type[100];
		int hotel_staff_size;
		int hotel_room_size;
		int hotel_established_year;
	    char hotel_address[100];
	    char hotel_rating_type[100];
	    char hotel_website[100];
	    
		
	public:
		 //setter
		 void setData()
		 {
              cout << "1) Enter ID: ";                  cin >> this->hotel_id;
              cout << "2) Enter Name: ";                cin >> this->hotel_name;
              cout << "3) Enter Type: ";                cin >> this->hotel_type;
              cout << "4) Enter Staff size: ";          cin >> this->hotel_staff_size;
              cout << "5) Enter Room size: ";           cin >> this->hotel_room_size;
              cout << "6) Enter Established year: ";    cin >> this->hotel_established_year;
              cout << "7) Enter Rating type: ";         cin >> this->hotel_rating_type;
              cout << "7) Enter Website: ";             cin >> this->hotel_website;
		 }
		 //getter
		 void getData()
		 {
			cout <<"- ID: "<<this->hotel_id <<endl 
			     <<"- Name: "<<this->hotel_name  <<endl
			     <<"- Type: "<<this->hotel_type <<endl
				 <<"- Staff size: "<<this->hotel_staff_size <<endl 
				 <<"- Room size: "<<this->hotel_room_size <<endl 
				 <<"- Established year: "<<this->hotel_established_year <<endl
				 <<"- Rating type :   "<<this->hotel_rating_type <<endl 
				 <<"- Website: "<<this->hotel_website  <<endl;	 	
		 }	
};

int main()
{
	Hotel h[100];
	int i,n;
	
	cout <<"~ How many Hotel : ";
	cin >> n;
	
	cout <<endl<<"----------- -: Hotel Detail :- -----------"<<endl <<endl;
	
	for(i=0 ; i<n ; i++)
	{
		h[i].setData();
		cout <<"---------------------------------------"<<endl <<endl;
	}
	for(i=0 ; i<n ; i++)
	{
		h[i].getData();
		cout <<"---------------------------------------"<<endl <<endl;
	}
	return 0;
}



























