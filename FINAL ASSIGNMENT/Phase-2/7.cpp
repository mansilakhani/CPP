/*
	Prepare a Calculator which only performs Circle
	related mathematical operations like finding Area of
	Circle, Perimeter of Circle and Conversion of radius into
	Diameter. All operations are continuous until user wish
	to exit. By using C++, create this calculator for a batch
	of bacholers.
*/

#include<iostream>
using namespace std;

int main()
{
	 int area ,radius , diameter, perimeter ,pi=3.14 ,choice;
	 //int choice;
	 
	 while(choice!=0)
	 {
	 cout << "~ Press 1 for Area of circle  "<<endl;
	 cout << "~ Press 2 for Perimeter of circle  "<<endl;
	 cout << "~ Press 0 for exit."<<endl;
	 
	 cout <<endl<< "~> Enter your choice : ";
	 cin  >> choice;
	 
	 switch(choice)
	 {
	 		case 1:
	 				int area;
	 				cout <<endl << "~> Enter Radius of circle : ";
	 				cin >> radius;
	 				
	 				diameter = 2*radius;                       
	 				cout <<endl<< "~> Radius into Diameter : "<<diameter<<endl;
	 				
					area = 3.14*radius*radius;  
					cout <<endl<< "~> Area of circle : "<<area <<endl;  
					break; 
			
			case 2:
	 				int perimeter;
	 				cout <<endl << "~> Enter Radius of circle : ";
	 				cin >> radius;
	 				
	 				diameter = 2*radius;                       
	 				cout <<endl<< "~> Radius into Diameter : "<<diameter<<endl;
	 				
					perimeter = 2*3.14*radius;  
					cout <<endl<< "~> Perimeter of circle : "<<perimeter <<endl;               
	 				break;
					 
			case 0:	
					break;
					
			default:
					cout << "Invalid input .....";
					break;			             
	 	}	
	 	cout <<endl<<"-----------------------------------"<<endl;	
	 }
	 return 0;
}
