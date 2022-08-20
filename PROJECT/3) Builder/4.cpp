/*	WAP to create two class HighSchool and College with fields like id,
	stu_name, stu_roll_no, stu_standard, stu_age, stu_contact,
	stu_edu_institute_name and stu_address. Make suitable setter and getter
	with use of static data members.
*/

#include<iostream>
using namespace std;

class HighSchool
{
	private:
		int  id;          
		char stu_name[100];
		int  stu_roll_no;
		int  stu_std;
		int  stu_age;
		char stu_contact[100];
	    char stu_address[100];
		static char stu_edu_school_name[100];
		
	public:
	 	
		 void setData()
		     {
		        cout<<endl<<"-------------------- -: High School Student Detail :--------------"<<endl <<endl;
		     	cout << "~> Enter ID :  "; cin >>this-> id;
		     	cout << "~> Enter Name :  "; cin >>this-> stu_name;
		     	cout << "~> Enter Roll no :  "; cin >>this-> stu_roll_no;
		     	cout << "~> Enter Standard :  "; cin >>this-> stu_std;
		     	cout << "~> Enter Age :  "; cin >>this-> stu_age;
		     	cout << "~> Enter Contact :  "; cin >>this-> stu_contact;
		     	cout << "~> Enter Address :  "; cin >>this-> stu_address;
		     }
			 
		 void getData()
		     {
		     	cout <<endl<<"-------------------- -: High School Student Detail :--------------"<<endl <<endl;
		        cout << "- ID : "<<this->id <<endl 
				     << "- Name: "<<this->stu_name <<endl 	
		             << "- Roll no : "<<this->stu_roll_no <<endl 
		             << "- Standard: "<<this->stu_std <<endl 
		             << "- Age: "<<this->stu_age <<endl 
		             << "- Contact: "<<this->stu_contact <<endl 
					 << "- Address : "<<this->stu_address <<endl
					 << "- High school name : "<<this->stu_edu_school_name <<endl;
			 }		 	  
};

class College
{
	private:
		int  id;          
		char stu_name[100];
		int  stu_roll_no;
		char stu_std[100];
		int  stu_age;
		char stu_contact[100];
	    char stu_address[100];
		static char stu_edu_institute_name[100];
		
	public:
	 	
		 void setData()
		     {
		     cout <<endl<<"-------------------- -: College Student Detail :--------------"<<endl <<endl;
		     	cout << "~> Enter ID :  "; cin >>this-> id;
		     	cout << "~> Enter Name :  "; cin >>this-> stu_name;
		     	cout << "~> Enter Roll no :  "; cin >>this-> stu_roll_no;
		     	cout << "~> Enter Standard :  "; cin >>this-> stu_std;
		     	cout << "~> Enter Age :  "; cin >>this-> stu_age;
		     	cout << "~> Enter Contact :  "; cin >>this-> stu_contact;
		     	cout << "~> Enter Address :  "; cin >>this-> stu_address;
		     }
			 
		 void getData()
		     {
		     cout <<endl<<"-------------------- -: College Student Detail :--------------"<<endl <<endl;
		        cout << "- ID : "<<this->id <<endl 
				     << "- Name: "<<this->stu_name <<endl 	
		             << "- Roll no : "<<this->stu_roll_no <<endl 
		             << "- Standard: "<<this->stu_std <<endl 
		             << "- Age: "<<this->stu_age <<endl 
		             << "- Contact: "<<this->stu_contact <<endl 
					 << "- Address : "<<this->stu_address <<endl
					 << "- College name : "<<this->stu_edu_institute_name <<endl;
			 }
};

char HighSchool :: stu_edu_school_name[100] = "Gajera Vidhyabhavan";
char College :: stu_edu_institute_name[100] = "Bhagwan Mahavir Unversity";

int main()
{
	HighSchool h[100];
	College c[100];
	
	int i,n;
	
	cout <<"=> How many object: ";
	cin >> n;
	cout << endl;
	
	for(i=0 ; i<n ; i++)
	{
		h[i].setData();
		c[i].setData();
	    cout <<endl<<"---------------------------------------------------------"<<endl <<endl;
	}
	for(i=0 ; i<n ; i++)
	{
		h[i].getData();
		c[i].getData();
	    cout <<endl<<"---------------------------------------------------------"<<endl <<endl;
	}
	return 0;
}

