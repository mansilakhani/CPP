/*
	A Higher Secondary School opens after COVID-19 crisis
	and admission process will be starting for registration
	of students. Help administration department for
	registering student information such liker
	stu_id
 	stu_name
 	stu_age
	stu_course
	stu_email
	stu_college
*/


#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	private :
		int  stu_id;
		char stu_name[100];
		int  stu_age;
		char stu_course[100];
		char stu_email[100];
		static char stu_college[100];
		
	public :
		
		void Stu_setData()
		{
			cout << endl<<"- Enter Student Id : ";
			cin  >> this->stu_id;
			cout <<"- Enter Student Name : ";
			cin  >> this->stu_name;
			cout <<"- Enter Student Age : ";
			cin  >> this->stu_age;
			cout <<"- Enter Student Course : ";
			cin  >> this->stu_course;
			cout <<"- Enter Student Email : ";
			cin  >> this->stu_email;
		}
		
		void Stu_getData()
		{
			cout <<endl<<"=> Enter Student Information : "<<endl<<endl
				 <<"- ID : "<<this->stu_id <<endl
			     <<"- Name : "<<this->stu_name <<endl
				 <<"- Age : "<<this->stu_age <<endl
				 <<"- Course : "<<this->stu_course <<endl	
				 <<"- Email : "<<this->stu_email <<endl 
				 <<"- College : "<<this->stu_college<<endl;
		}
};

char Student :: stu_college[100] = "M.K.Gandhi College";

int main()
{
	Student s1[100];
	int i,n;
	
	cout <<endl<<"=> How many Students : ";
	cin  >> n;
	
	for(i=0;i<n;i++)
	{
		s1[i].Stu_setData();
		cout <<endl<<"----------------------------------"<<endl;
	}
	for(i=0;i<n;i++)
	{
		s1[i].Stu_getData();
		cout <<endl<<"----------------------------------"<<endl;
	}
	return 0;
}




