/*
Build a C++ program which helps students that how to convert  a given string in lowwercase, uppercase, 
title case and toggle case whenever they wants by passing their choice.

*/

#include<iostream>
#include<string.h>
using namespace std;

class Converter
{
	private:
		char a[100];
		int i;
		
	public:
		
		void cases()
		{
			cout<<"* Press 1 for Lowercase"<<endl;
			cout<<"* Press 2 for Uppercase"<<endl;
			cout<<"* Press 3 for Titlecase"<<endl;
			cout<<"* Press 4 for Togglecase"<<endl;	
		}
		
		void Lowercase()
		{
			cout<<endl<<"=> Enter any string :- "; cin>>this->a;
			
			 for(i=0;a[i]!='\0';i++)
			 {
			 	if(a[i]>='A'&&a[i]<='Z')
			 	{
			 		a[i] = a[i]+32;
				}
			 }
			 cout<<"- Lowercase is: "<<this->a<<endl;
		}
		
		void Uppercase()
		{
			cout<<endl<<"=> Enter any string :- "; cin>>this->a;
			for(i=0;a[i]!='\0';i++)
			 {
			 	if(a[i]>='a'&&a[i]<='z')
			 	{
			 		a[i] = a[i]-32;
				}
			 }
			 cout<<"- Uppercase is: "<<this->a<<endl;
		}
		
		void Titlecase()
		{
			cout<<endl<<"=> Enter any string :- "; cin>>this->a;
			if(a[0]>='a'&&a[0]<='z')
			{
			 	a[i] = a[i]-32;
			}
			cout<<"- Titlecase is: "<<this->a<<endl;
		}
		
		void Togglecase()
		{
			cout<<endl<<"=> Enter any string :- "; cin>>this->a;
			for(i=0;a[i]!='\0';i++)
			 {
			 	if(a[i]>='a'&&a[i]<='z')
			 	{
			 		a[i] = a[i]-32;
				}
				else if(a[i]>='A'&&a[i]<='Z')
			 	{
			 		a[i] = a[i]+32;
				}
			 }
			 cout<<"- Togglecase is: "<<this->a<<endl;
		}
};

int main()
{
	Converter c1;
	int choice;
	c1.cases();
	
	cout<<endl<<"* Enter your choice: ";
	cin>>choice;
	
	if(choice==1)
	{
		c1.Lowercase();	
	}
	else if(choice==2)
	{
		c1.Uppercase();
	}
	else if(choice==3)
	{
		c1.Titlecase();
	}
	else if(choice==4)
	{
		c1.Togglecase();
	}
	else
	{
		cout<<endl<<"=> Invalid choice..."<<endl;
	}
	return 0;
}
