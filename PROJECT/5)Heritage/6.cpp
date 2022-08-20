// WAP to read and print employee information with use of multilevel inheritance. 


#include<iostream>
#include<string.h>
using namespace std;

class A 
{
	public :
		int  emp_id;
		char emp_name[100];
		int  emp_age;
		int  emp_salary;
		int  emp_experience;
		char emp_role[100];
		char emp_email[100];
		static char emp_company_name[100];
};

class B : public A
{
	public :
	void setB()
	{
		cout << endl<<"------------ -: Details of Employee  :- ------------"
        <<endl     <<endl;
		cout << "~ Enter id :- "; 
		cin  >> this->emp_id;
		cout << "~ Enter name :- "; 
		cin  >> this->emp_name;
		cout << "~ Enter age :- "; 
		cin  >> this->emp_age;
	}
};

class C : public B
{
	public :	
	void setC()
	{
		cout << "~ Enter salary :- "; 
		cin  >> this->emp_salary;
		cout << "~ Enter experience :- "; 
		cin  >> this->emp_experience;
		cout << "~ Enter role :- "; 
		cin  >> this->emp_role;
		cout << "~ Enter email :- "; 
		cin  >> this->emp_email;
		cout << endl;
	}
};

class D : public C
{
	public :
	void getAllData()
	{
		cout << endl<<endl<<"------------ -: Details of Employee  :- ------------"<<endl <<endl;
		cout << "~> Id           :- " << this->emp_id << endl;
		cout << "~> Name         :- " << this->emp_name << endl;
		cout << "~> Age          :- " << this->emp_age << endl;
		cout << "~> Salary       :- " << this->emp_salary << endl;
		cout << "~> Experience   :- " << this->emp_experience << endl;
		cout << "~> Role         :- " << this->emp_role << endl;
		cout << "~> Email        :- " << this->emp_email << endl;
		cout << "~> Company name :- " << this->emp_company_name << endl;
	}
};

char A :: emp_company_name[100] = "Code Red Technology";

int main()
{
	D s[100];
	int i,n;
	
	cout <<"~> How many employee :- "; cin >> n;
	cout << endl;
	
	for(i=0;i<n;i++)
	{
		s[i].setB();
		s[i].setC();
	}
	for(i=0;i<n;i++)
	{
		s[i].getAllData();
	}
	return 0;
}


