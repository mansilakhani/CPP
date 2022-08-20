/*
	Create a Calculator in C++ by using all types of user
	defined functions. User can perform all types of basic
	arithmetic operations until he/she wants.
*/


#include<iostream>
#include<stdio.h>
using namespace std;

void Addition (int n ,int m)
{
	cout <<endl<< "-> Sum of a & b : "<<n+m;
}
void Subtraction (int n ,int m)
{
	cout <<endl<< "-> Sub of a - b : "<<n-m;
}
void Multiplication (int n ,int m)
{
	cout <<endl<< "-> Mult of a * b : "<<n*m;
}
void Division (int n ,int m)
{
	cout <<endl<< "-> Div of a / b : "<<n/m;
}
void Modulus (int n ,int m)
{
	cout <<endl<< "-> Mod of a % b : "<< (n-(n/m)*m);
}

int main()
{

	int a,b,choice;
	
	do
	{
	cout <<"# Press 1 for Addition : "<<endl;
	cout <<"# Press 2 for Subtraction : "<<endl;
	cout <<"# Press 3 for Multiplication : "<<endl;
	cout <<"# Press 4 for Division : "<<endl;
	cout <<"# Press 5 for Modulus : "<<endl;
	cout <<"# Press 0 for exit"<<endl;
	
	cout <<endl<< "=> Enter your choice : ";
	cin >> choice;
	
	switch(choice)
	 {
			case 1 :
						cout <<endl<<"...... -: Addition :- ....... "<<endl;
						cout <<endl<< "-> Enter value of a : ";
						cin >> a;
						cout << "-> Enter value of b : ";
						cin >> b;
						Addition (a,b);
						cout <<endl<<".............................."<<endl;
						break;
			case 2 :
						cout <<endl<<"..... -: Subtraction :- ..... "<<endl;
						cout <<endl<< "-> Enter value of a : ";
						cin >> a;
						cout << "-> Enter value of b : ";
						cin >> b;
						Subtraction (a,b);
						cout <<endl<<".............................."<<endl;
						break;	
			case 3 :
						cout <<endl<<"..... -: Multiplication :- ..... "<<endl;
						cout <<endl<< "-> Enter value of a : ";
						cin >> a;
						cout << "-> Enter value of b : ";
						cin >> b;
						Multiplication (a,b);
						cout <<endl<<"..............................."<<endl;
						break;	
			case 4 :
						cout <<endl<<"...... -: Division :- ....... "<<endl;
						cout <<endl<< "-> Enter value of a : ";
						cin >> a;
						cout << "-> Enter value of b : ";
						cin >> b;
					    Division (a,b);
					    cout <<endl<<".............................."<<endl;
						break;		
			case 5 :
						cout <<endl<<"...... -: Modulus :- ....... "<<endl;
						cout <<endl<< "-> Enter value of a : ";
						cin >> a;
						cout << "-> Enter value of b : ";
						cin >> b;
					    Modulus (a,b);
					     cout <<endl<<".............................."<<endl;
						break;
			case 0 :
						break;
						
			default :
					    cout <<endl<< "Invalid Choice......";		
		}
   	}while(choice!=0);
	return 0;
}


