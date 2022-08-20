/*
	Design a Calculator for an arithmetic operations in
	which user can do all basic operations as many times he/
	she wants until he/she exit from that. Use C++ as a
	primary language to accomplish this challenge.
*/

#include<iostream>
using namespace std;

int main()
{
	int choice ,a,b,result;
	
	while(choice!=0)
	{
	cout << "~ Press 1 for Addition : "<<endl;
	cout << "~ Press 2 for Subtraction : "<<endl;
	cout << "~ Press 3 for Multiplication : "<<endl;
	cout << "~ Press 4 for Division : "<<endl;
	cout << "~ Press 5 for Modulus : "<<endl;
	cout << "~ Press 0 for exit."<<endl;
	
	cout <<endl<< "~ Enter your choice : ";
	cin >> choice;
	
	switch(choice)
	{
		case 1 :
				cout <<endl<< "~> Enter value of a : ";
				cin >> a;
				cout << "~> Enter value of b : ";
				cin >> b;
				
				result = a+b;
				
				cout <<endl<< "~> ADD : "<<result <<endl;
				break;
				
		case 2 :
				cout <<endl<< "~> Enter value of a : ";
				cin >> a;
				cout << "~> Enter value of b : ";
				cin >> b;
				
				result = a-b;
				
				cout << endl<<"~> SUB : "<<result <<endl;
				
		case 3 :
				cout <<endl<< "~> Enter value of a : ";
				cin >> a;
				cout << "~> Enter value of b : ";
				cin >> b;
				
				result = a*b;
				
				cout << endl<<"~> MULT : "<<result<<endl;
				break;
				
		case 4 :
				cout <<endl<< "~> Enter value of a : ";
				cin >> a;
				cout << "~> Enter value of b : ";
				cin >> b;
				
				result = a/b;
				
				cout <<endl<< "~> DIV : "<<result<<endl;
				break;		
						
		case 5 :
				cout <<endl<<"~> Enter value of a : ";
				cin >> a;
				cout << "~> Enter value of b : ";
				cin >> b;
				
			    result = a%b;
				
				cout <<endl<< "~> MOD : "<<result <<endl;
				break;	
					
		case 0:
				break;
				
		default : 
				cout << "Invalid input ........";
				break;					
										
		}
		cout <<endl<<"-----------------------------------"<<endl;	
	}
	
}
