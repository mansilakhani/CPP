/*

A Refugee camp have shortage of registering refugees which are coming from Afghanistan. So registration team
split up their register documents in two teams: One notedown first name along with passport id, another one note
down last name along with that passport id. Now while entering that all data as a final stage, a Computer operator 
needs a system which automatically merge first name and last name togather as per reference of passportid. So design 
this type of system in C++ to help that Refugee camp.

*/

#include<iostream>
#include<string.h>
using namespace std;

class Passport
{
	private:
		char f_name[100], l_name[100], passport[100], fl_name[100];
		int a,b,c;
		
	public:
		
		void setdata()
		{
			cout<<"=> Enter first name : "; 
			cin>>this->f_name;
			cout<<"=> Enter Last name : "; 
			cin>>this->l_name;
			cout<<"=> Enter Passport ID : "; 
			cin>>this->passport;
		}
		
		void getdata()
		{
			strcpy(fl_name, strcat(f_name,l_name));
			cout<<endl<<"=> Full Name : "<<this->fl_name;
			cout<<endl<<"=> Passport ID : "<<this->passport<<endl;
		}
};

int main()
{
	Passport p1;
	
	p1.setdata();
	
	p1.getdata();
	
	return 0;
}

