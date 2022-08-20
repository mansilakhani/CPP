/* WAP to create a class which Read and print Class, Student details
   using Two Classes. (Make two classes, create one classe's obj in another
   class.)
*/

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	private:
		char Stu_First_name[50];
		char Stu_Last_name[50];
		int  Stu_age;
		char Stu_gender[100];
		char Email[100];
		char school_name[100];
		int  grid;
		
	public:
		void setData()
		     {
			cout <<endl <<"------------- -: Student Detail :- ------------"<<endl <<endl;
			cout << "~> Enter First Name: ";             cin >> this-> Stu_First_name;
			cout << "~> Enter Last Name: ";              cin >> this-> Stu_Last_name;
			cout << "~> Enter Age: ";                    cin >> this-> Stu_age;
			cout << "~> Enter School Name: ";            cin >> this-> school_name;
			cout << "~> Enter GRID: ";                   cin >> this-> grid;
			cout << "~> Enter Email: ";                  cin >> this-> Email;
		     }
		   
void getData()
		    {
			cout << "- First Name: "<<this->Stu_First_name <<endl 
			     << "- Last Name: "<< this->Stu_Last_name <<endl
				 << "- Age: "<< this->Stu_age<<endl 
				 << "- School Name: "<<this->school_name <<endl 
				 << "- GRID: "<< this->grid <<endl 
				 << "- Email: "<< this->Email <<endl ;
		     }
};

class Class
{
	
	Student s;
	private:
	
		int Standard;
		char Section[100];
		
	public:
		void setData()
		   {
		        cout <<endl <<"------------- -: Class Detail :- ------------"<<endl <<endl;
			
			    cout << "~> Enter Standard : ";               cin >> this->Standard;
			    cout << "~> Enter Section : ";                cin >> this->Section;
		    	s.setData();
		    }
			void getData()
		     {
		
		         cout << "- Standard: "<<this->Standard <<endl
		              << "- Section: "<<this->Section <<endl;
			    s.getData();
		     }
};

int main()
{
	Class c[100];
	int i,n;
	
	cout << "~ How many student : ";
	cin >> n;

	for(i=0 ; i<n ; i++)
	    {
		c[i].setData();
		cout <<endl <<"-----------------------------------------------"<<endl <<endl;
	    }
	
	cout <<endl <<"-----------------------------------------------"<<endl <<endl;
	for(i=0 ; i<n ; i++)
	    {
		c[i].getData();
		cout <<endl <<"-----------------------------------------------"<<endl <<endl;
	    }
	return 0;
}



