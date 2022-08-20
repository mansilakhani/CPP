/*

An IT company named “HAXM Pvt. Ltd.” released an open
competition to create a startup level User Authentication
system.
This system must have these functionalitiess
User can register with email and password
User can login with proper email and password
User can delete his/her account
Criterias for user authentications
A password must contain at least one digit, one
special symbol, one lowercase letter and one uppercase
letter while user try to registe}
Email and Password must be same while user login
After user account deletion, user cannot be able to
login again
Design a C++ system for this competition for the price
money ?.2500 [Hintq You can use multiple String Arrays]

*/

#include<iostream>
#include<string.h>
using namespace std;

class IT
{
	private:
		char email[100], psw[100], email1[100], psw1[100];
		int i,l=0,u=0,d=0,s=0,a=0;
		
	public:
		void list()
		{
			cout<<"* Press 1 for Registrartion."<<endl;
			cout<<"* Press 2 for Login."<<endl;
			cout<<"* Press 3 for Deletion."<<endl;
			cout<<"* Press 0 for Exit."<<endl;
		}
		
		void registration()
		{
			cout<<endl<<"=> Enter Email: "; 
			cin>>email;
			cout<<"=> Enter Password: "; 
			cin>>psw;
			
			for(i=0;psw[i]!='\0';i++)
			{
				if(psw[i]>='a'&&psw[i]<='z')
				{
					l++;
				}
				else if(psw[i]>='A'&&psw[i]<='Z')
				{
					u++;
				}
				else if(psw[i]>='0'&&psw[i]<='9')
				{
					d++;
				}
				else
				{
					s++;
				}
			}
			
			if(l>=1 && u>=1 && d>=1 && s>=1)
			{
				cout<<endl<<"- Registration successfully."<<endl;
				a++;
			}
			else
			{
				cout<<endl<<"- Please enter valid Password."<<endl;
			}
		}
		
		void login()
		{
			if(a>=1)
			{
				cout<<endl<<"=> Enter Email: "; 
				cin>>this->email1;
				cout<<"=> Enter Password: "; 
				cin>>this->psw1;
				
				if(strcmp(email1, email)==0 && strcmp(psw1, psw)==0)
				{
					cout<<endl<<"- Login successfully."<<endl;	
				}
				else
				{
					cout<<endl<<"- Please Enter right password and email."<<endl;
				}	
			}
			else
			{
				cout<<endl<<"- You can't login before registration."<<endl;
			}
		}
		
		void deletion()
		{
			if(a>=1)
			{
				cout<<endl<<"=> Enter Email: "; 
				cin>>email1;
				cout<<"=> Enter Password: "; 
				cin>>psw1;
				
				if(strcmp(email1, email)==0 && strcmp(psw1, psw)==0)
				{
					for(i=0;email[i]!='\0';i++)
					{
						email[i]='0';
					}
					
					for(i=0;psw[i]!='\0';i++)
					{
						psw[i]='0';
					}
					cout<<"- Deletion successfully."<<endl;	
				}
				else
				{
					cout<<endl<<"- Please enter right password and email."<<endl;
				}	
			}
			else
			{
				cout<<endl<<"- You can't deletion before registration."<<endl;
			}
		}
		
};

int main()
{
	IT i1;
	int choice;
	do
	{
		i1.list();
		
		cout<<endl<<"=> Enter Your Choice: "; 
		cin>>choice;
		
		if(choice==1)
		{
			i1.registration();
		}
		else if(choice==2)
		{
			i1.login();
		}
		else if(choice==3)
		{
			i1.deletion();
		}
		else if(choice!=0)
		{
			cout<<endl<<"- Please Enter Valid Value..."<<endl;
		}	
		cout<<endl<<endl;
	}while(choice!=0);
	return 0;
}
