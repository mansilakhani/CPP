// WAP to demonstrate example of parameterized constructor.

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
		State(char name[] , char capital_city[] , char offical_language[])
		{
			strcpy(this->State_name,name);
			strcpy(this->State_capital_city,capital_city);
			strcpy(this->State_offical_language,offical_language);
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
	State s1("Assam","Guwahati","Assamese");
	State s2("Gujarat","Gandhinagar","Gujarati");
	State s3("Arunachal","Itanagar","English");
	
	s1.getData();
	s2.getData();
	s3.getData();
	return 0;
}

