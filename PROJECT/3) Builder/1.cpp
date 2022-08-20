/* WAP to create a class Employee with setter and getter. Which have
   fields like id, name, role, salary, experience, address, email and contact.
   Get 5 records.
*/

#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	private:
	int  emp_id;
	char emp_name[1000];
	char emp_role[100];
	int  emp_salary;
	int  emp_experience;
    char emp_address[100];
    char emp_email[100];
    int  emp_contact;
	//char emp_company_name[50];
	
	public:
		void setData()
		  {
			cout<<"1) Enter ID : ";                         cin >> this->emp_id;
			cout<<"2) Enter Name : ";                       cin >> this->emp_name;
			cout<<"3) Enter Role : ";                       cin >> this->emp_role;
			cout<<"4) Enter Salary : ";                     cin >> this->emp_salary;
			cout<<"5) Enter Experience : ";                 cin >> this->emp_experience;
			cout<<"6) Enter Address : ";                    cin >> this->emp_address;
			cout<<"7) Enter Email : ";                      cin >> this->emp_email;
			cout<<"8) Enter contact : ";                     cin >> this->emp_contact;
	//	    cout<<"9) Enter Company name : ";           cin >> this->emp_company_name;
		  }
		//getter
		
		void getData()
		   {
			cout << "- ID : "<<this->emp_id <<endl 
			     <<"- Name : "<<this->emp_name <<endl
			     <<"- Role : "<<this->emp_role <<endl 
				 <<"- Salary : "<<this->emp_salary <<endl
			     <<"- Experience : "<<this->emp_experience <<endl 
				 <<"- Address : "<<this->emp_address <<endl
			     <<"- Email : "<<this->emp_email <<endl
			     <<"- contact : "<<this->emp_contact <<endl;
		//		 <<endl <<"- Company name: "<<this->emp_company_name <<endl;
		    }
};

int main()
{
	Employee e[100];
	int i,n;
	
	cout <<"~ How many Employee : ";
	cin >> n;
	
	cout << endl<<"------------- -: Employee Detail :- -----------------"<<endl <<endl;
	for(i=0 ; i<n ; i++)
	{
		e[i].setData();
		cout << endl<<"--------------------------------------------------"<<endl <<endl;
	}
//	cout << endl<<"--------------------------------------------------"<<endl <<endl;
	for(i=0 ; i<n ; i++)
	{
		e[i].getData();
		cout << endl<<"--------------------------------------------------"<<endl <<endl;
	}
	return 0;
}
