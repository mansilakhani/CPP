/*

Build a system which converts given message into
Cyphertext by adding custom letter or ASCII value. Also
provide decoding for that encoded text to understand
Indian Army to secure internal communication between
soldiers. Help them by creating a C++ program.

*/

#include<iostream>
#include<string.h>
using namespace std;

class Army
{
	private:
		char a[100];
		int b[100];
		int i, n;
		
	public:
		
		void coding()
		{
			cout<<"* Press 1 for Incoding message."<<endl;
			cout<<"* Press 2 for Decoding message."<<endl;
			cout<<"* Press 0 for Exit."<<endl;
		}
		
		void Incoding()
		{
			cout<<"=> Enter any string :- "; cin>>this->a;
			cout<<endl<<"=> Your string incoding is :- ";
			for(i=0;a[i]!='\0';i++)
			{
				cout<<int(a[i]);
			}
			cout<<endl;
		}
		
		void Decoding()
		{
			cout<<endl<<"=> What is your code number :- ";
			cin>>n;
			
			cout<<endl;
			for(i=0;i<n;i++)
			{
				cout<<"=> Enter Number: ";
				cin>>b[i];
			}
			cout<<"=> Your string decoding is: ";
			for(i=0;i<n;i++)
			{
				cout<<char(b[i]);
			}
			cout<<endl;
		}
};

int main()
{
	Army a1;
	a1.coding();
	int choice;
	
	do
	{
		cout<<endl<<"=> Enter Your Choice: ";
	cin>>choice;
	
	if(choice==1)
	{
		a1.Incoding();
	}
	else if(choice==2)
	{
		a1.Decoding();
	}
	else if(choice==0)
	{
		break;
	}
	else if(choice!=0)
	{
		cout<<endl<<"- Invalid choice...."<<endl;
	}	
	}while(choice!=0);
	
	return 0;
}
