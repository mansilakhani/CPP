/*	WAP with a mother class animal. Inside it define a name and an age variables, and set_value() function. 
	Then create two bases variables Zebra and Dolphin which write a message telling the age, the name and 
	giving some extra information (e.g. place of origin).
*/


#include<iostream>
#include<string.h>
using namespace std;

class Animal
{
	public:
		int age;
		char name[100];
		char origin[100];
		
	
};

class Zebra : public Animal
{
	public:
		void setData()
		{
			cout <<"----------- -:Information of Zebra:- -----------"<<endl<<endl;
			cout << "~ Enter Zeb_Name : ";   cin >>name;
			cout << "~ Enter  Zeb_Age : ";      cin >>age;
			cout << "~ Enter  Zeb_Comes : ";    cin >>origin;
		}
		void getData()
		{
			
			cout << "- The name of zebra is "<<this->name<<"."<<endl
			     << "- The Age of Zebra is "<<this->age<<"."<<endl
			     << "- Zebra come from "<<this->origin <<"." <<endl;	
		}	
};

class Dolphin : public Animal
{
	public:
		void setData()
		{
			cout <<endl<<"---------- -:Information of Dolphin :- ----------"<<endl<<endl;
			cout << "~ Enter Dolp_Name : ";   cin >>name;
			cout << "~ Ente  Dolp_Age : ";      cin >>age;
			cout << "~ Enter  Dolp_Comes : ";    cin >>origin;
		}
		void getData()
		{
			cout <<endl<<endl<< "-------------------------------------------------"<<endl;
			cout << "- The name of Dolphin is "<<this->name<<"."<<endl
			     << "- The Age of Dolphin is "<<this->age<<"."<<endl
			     << "- Dolphin come from "<<this->origin <<"." <<endl;	
		}	
};

int main()
{
	Zebra z;
	Dolphin d;
	
	z.setData();
	d.setData();
	cout << "-------------------------------------------------"<<endl;
	z.getData();
	d.getData();
	
	
	
	
	return 0;
}

