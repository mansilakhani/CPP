/*

By using Multilevel Inheritance, implement below
mentioned structure in C++ for employee records system.

Use proper implementation of Encapsulation, static
keyword and Inheritance when needed.

*/


#include<iostream>
#include<string.h>
using namespace std;

class P
{
	public : 
		int    emp_id;
		char   emp_name[100];
		int    emp_age;
		int    emp_salary;
		int    emp_experience;
		char   emp_email[100];
		static char emp_company_name[100];
		char   emp_city[100];
		char   emp_role[100];
		
		void P_setData()
		{		
			cout <<endl;
			cout <<"=> Enter Employee id : ";
			cin  >>this->emp_id;
			cout <<"=> Enter Employee name : ";
			cin  >>this->emp_name;
			cout <<"=> Enter Employee age : ";
			cin  >>this->emp_age;
		}
};

class Q : public P
{
	public:
		
		void Q_setData()
		{
			cout <<"=> Enter Employee role : ";
			cin  >>this->emp_role;
			cout <<"=> Enter Employee salary : ";
			cin  >>this->emp_salary;
			cout <<"=> Enter Employee experience : ";
			cin  >>this->emp_experience; 
		}
};

class R : public Q
{
	public:
		
		void R_setData()
		{
			 cout <<"=> Enter Employee Email : ";
			 cin  >> this->emp_email;
			 cout <<"=> Enter Employee City : ";
			 cin  >> this->emp_city;
		}
};

class S : public R
{
	public:	
		void AllgetData()
		{
			cout <<endl;
			cout <<"------------ -: Details of Employee  :- ------------"<<endl <<endl;
			cout <<"- ID : "<<this->emp_id <<endl;
			cout <<"- Name : "<<this->emp_name <<endl;
			cout <<"- Age : "<<this->emp_age <<endl;
			cout <<"- Salary : "<<this->emp_salary <<endl;
			cout <<"- Experience : "<<this->emp_experience <<endl;
			cout <<"- Email : "<<this->emp_email <<endl;
			cout <<"- Company name : "<<this->emp_company_name <<endl;
			cout <<"- City : "<<this->emp_city <<endl;
			cout <<"- Role : "<<this->emp_role <<endl;
		}
};

char P :: emp_company_name[100]="I.T";

int main()
{
	S s1[100];
	int i,n;
	
	cout <<endl<<"* How many employee : ";
	cin  >>n;
	
	for (i=0;i<n;i++)
	{
		s1[i].P_setData();
		s1[i].Q_setData();
		s1[i].R_setData();
	}
	for (i=0;i<n;i++)
	{
		s1[i].AllgetData();
	}
	return 0;
}
