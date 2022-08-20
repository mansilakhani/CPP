/*
	Design a C++ UDF which converts given seconds into
	time in format of HH:MM:SS. Also create another UDF which
	converts given time into total seconds. End user have
	choice to perform either operations whenever he/she
	wants.
*/


#include<iostream>
#include<string.h>
using namespace std;

void P_Choice()
{
	
	int hr,min,second,sec,total_sec;
	int choice,a,b;

	while(choice!=0)
	{
	
	cout <<endl<< "# Press 1 for Convert second into time (HH:MM:SS) : "<<endl; 
	cout << "# Press 2 for Convert time into total second : "<<endl;
	cout << "# Press 0 for exit."<<endl;
	
	cout <<endl<<"=> Enter your choice : ";
	cin  >> choice;

	switch(choice)
	{
		case 1 :
				cout <<endl<<"-> Enter Second : ";
				cin  >> second;
				
				hr= (second/60)/60;
				min=(second/60)%60;
				sec=second%60;
				
				cout <<endl<< "-> Convert Second into time : "<<hr <<":" <<min <<":" <<sec <<endl;
				cout <<endl<<"-------------------------------------------------------"<<endl;
			    break;
			   
		
		case 2 :
				cout <<endl<<"-> Enter Hours : ";
				cin  >> hr;
				cout <<endl<<"-> Enter Minute : ";
				cin  >> min;
				cout <<endl<<"-> Enter Second : ";
				cin  >> sec;
				
				total_sec = (hr*60*60 )+(min *60 )+ sec;
				cout <<endl<< "-> Convert time into Second : "<<total_sec ;
				cout <<endl<<"-------------------------------------------------------"<<endl;
				break;
		
		case 0 :
				break;		
		
		default :
				cout <<endl<<"Invalid Input ......";		
	}
	}
}

class Choice
{
	public :
		void C_Data()
		{
			P_Choice();
		}
};

int main()
{
	Choice c1;
	c1.C_Data();
	return 0;
}
