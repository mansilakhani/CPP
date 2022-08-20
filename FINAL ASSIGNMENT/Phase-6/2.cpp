/*

A Businessman was bankrupted in a Scan with a minimal amount left
in a bank of ?. 18,000. After some months of hard work, he earned an external
amount of ?. 1,20,000. Now He might go to the bank and deposit or withdraw
some money as he wants. Prepare a C++ solution for this Scenario with all
required validations and criterias

*/


#include<iostream>
#include<string.h>
using namespace std;

class business
{
	private:
		char acc_no1[100]="1234567890";
		char pass1[100]="987654";
		char acc_no[100], pass[100];
		char name[100];
		int amt,c,d;
	
	public:
		
		void businessman()
		{
			cout<<endl<<"=> Enter Name: ";
			fflush(stdin);
			gets(name);
			cout<<"=> Enter Account Number: ";
			fflush(stdin);
			gets(acc_no);
			cout<<"=> Enter Password: ";
			fflush(stdin);
			gets(pass);
			
		}
		
		void List()
		{
			cout<<endl<<"* [1] Deposite	"<<endl;
			cout<<"* [2] Withdraw	 "<<endl;
			cout<<"* [0] Exit      "<<endl;
		}
		
		void solution()
		{
			if(strcmp(acc_no1,acc_no)==0 && strcmp(pass1,pass)==0 )
			{
				cout<<"=> Enter Total Amount: ";
				cin>>amt;
				
				if(amt>=18000)
				{
					do{
						List();
					
						cout<<"=> Enter Your Choice: ";
						cin>>c;
						
						if(c==1)
						{
							cout<<"- How many deposite:- ";
							cin>>d;
							amt+=d;
							cout<<endl<<"- Your balance : "<<amt<<endl;
						}
						else if(c==2)
						{
							cout<<"- How many Withdraw:- ";
							cin>>d;
							amt-=d;
							cout<<endl<<"- Your balance is: "<<amt<<endl;
						}
						else if(c!=0)
						{
							cout<<endl<<"- Please, Enter Valid Value...."<<endl;
						}
						
					}while(c!=0);
					
				}
				else
				{
					cout<<endl<<"- Sorry, You aren't able to open..."<<endl;
				}
			}
			else
			{
				cout<<endl<<"- Please Enter Right Account no and Password...."<<endl;
			}
		}
};

int main()
{
	business b1;
	
	b1.businessman();
	
	b1.solution();
	
	return 0;
}

