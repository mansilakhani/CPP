/*	WAP to demonstrate example of default constructor or no
	argument constructor.
*/

#include<iostream>
#include<string.h>
using namespace std;

class State
{
	   
    private:
	  	char State_name[100];
	 	char State_capital_city[100];
	 	char State_offical_language[100];
	 	
	public :
		State()
		{
			strcpy(this->State_name,"Assam");
			strcpy(this->State_capital_city,"Guwahati");
			strcpy(this->State_offical_language,"Assamese");
		}
		void getData()
		{
			cout <<"~> Name: "<<this->State_name <<endl
				 <<"~> Capital_city: "<<this->State_capital_city <<endl
				 <<"~> Offical language: "<<this->State_offical_language <<endl <<endl;
		}
};

int main()
{
	State s1,s2;
	
	s1.getData();
	s2.getData();
	return 0;
}

