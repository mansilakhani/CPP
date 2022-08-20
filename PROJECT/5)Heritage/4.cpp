//	WAP to read and print employee information using multiple inheritance.


#include<iostream>
#include<string.h>
using namespace std;

class A  
{
	public:
		int emp_id;
		char emp_name[1000];
		int emp_age;
		static char emp_company_name[100];	
	
	public:
		void setAData()
		 {
			cout << endl<<"------------ -: Details of Employee  :- ------------"
        <<endl <<endl;
			cout<<"~> Enter ID : ";                     cin >> this->emp_id;
			cout<<"~>  Enter Name : ";                   cin >> this->emp_name;
			cout<<"~>  Enter Age : ";                    cin >> this->emp_age;
		 }
};

class B  
{
	  public:
	  	char emp_role[100];
		int  emp_salary;
		char emp_email[100];
		char emp_city[50];
		int emp_experience;
		
	  public:
	  	 void setBData()
		 		{
					cout<<"~>  Enter Salary : ";              
cin >>      this->emp_salary;
					cout<<"~>  Enter Role : ";               
cin >> this->emp_role;
					cout<<"~>  Enter Email : ";              
cin >> this->emp_email;
					cout<<"~>  Enter City : ";               
cin >> this->emp_city;
					cout<<"~>  Enter Experience : ";          
cin >> this->emp_experience;
	      			}
};

class C:public A ,public B
{
	public:
		
	void getAllData()
		  {
			cout  	 << "- ID: "<<this->emp_id <<endl 
			  	 <<"- Name: "<<this->emp_name <<endl 
				 <<"- Age: "<<this->emp_age <<endl 
		         		 << "- Salary: "<<this->emp_salary <<endl 
		 		 <<"- Role: "<<this->emp_role <<endl 
		 		 <<"- Email: "<<this->emp_email <<endl 
		 		 <<"- City: "<<this->emp_city <<endl 
		 		 <<"- Experience: "<<this->emp_experience <<endl
		     		  <<"- Company name: "<<this->emp_company_name <<endl;
		  }
};

char A ::emp_company_name[100] = "Code Red technology";

int main()
{
	

	C c1[100];
	int i,n;
	cout <<"~ How many employee: "; 
	cin >> n;
	
	
	for(i=0;i<n;i++)
	{
		c1[i].setAData();
		c1[i].setBData();
		
	}
	
	cout << endl<<"-----------------------------------------------"<<endl <<endl;
	
	for(i=0;i<n;i++)
	{
		c1[i].getAllData();
		cout << endl<<"-----------------------------------------------"<<endl <<endl;
	}

	 return 0;
}


