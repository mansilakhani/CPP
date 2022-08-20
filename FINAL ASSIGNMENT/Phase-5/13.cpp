/*	
	Develop a C++ solution for Maths students to solve
	all types Geometry problems such like :
	Area of Circle
 	Perimeter of Circle
 	Area of Square
 	Area of Rectangle
 	Area of Triangle
 	Area of Sphere
*/


#include<iostream>
#include<string.h>
using namespace std;

void List()
{
	cout <<endl<< "(1) Area of circle : ";
	cout <<endl<< "(2) Perimeter of circle : ";
	cout <<endl<< "(3) Area of square : ";
	cout <<endl<< "(4) Area of rectangle : ";
	cout <<endl<< "(5) Area of triangle : ";
	cout <<endl<< "(6) Area of sphere : ";
	cout <<endl<< "(0) Exit ";
}

void Area_of_circle()
{
	int r,pi=3.14,area;
	
	cout <<endl<< "-> Enter Radius of circle : ";
	cin  >>r;
	
	area = 3.14*r*r;
	cout <<endl<<"-> Area of circle : "<<area <<endl;
}

void Perimeter_of_circle()
{
	int r,pi=3.14,peri;
	
	cout <<endl<< "-> Enter Radius of circle : ";
	cin  >>r;
	
	peri = 2*3.14*r;
	cout <<endl<<"-> Perimeter of circle : "<<peri <<endl;
}

void Area_of_square()
{
	int l,area;
	
	cout <<endl<< "-> Enter length : ";
	cin  >>l;
	
	area = l*l;
	cout <<endl<<"-> Area of square : "<<area <<endl;
}

void Area_of_rectangle()
{
	int l,area,b;
	
	cout <<endl<< "-> Enter length : ";
	cin  >>l;
	
	area = l*b;
	cout <<endl<<"-> Area of rectangle : "<<area <<endl;
}

void Area_of_triangle()
{
	int l,b,area;
	
	cout <<endl<< "-> Enter length : ";
	cin  >>l;
	cout <<endl<< "-> Enter breadth : ";
	cin  >>b;
	
	area = (l*b)/2;
	cout <<endl<<"-> Area of triangle : "<<area <<endl;
}

void Area_of_sphere()
{
	int r,pi=3.14,area;
	
	cout <<endl<< "-> Enter Radius : ";
	cin  >>r;
	
	area = 4*3.14*r*r;
	cout <<endl<<"-> Area of sphere : "<<area <<endl;
}

class All_geometry
{
	public:
		int choice;
		
	public:
		
		void AllData()
		{
		  do
		  {
		 	List();
			cout <<endl<<endl<<"-> Enter your choice : ";
			cin  >> choice;
			
			if(choice==1)
			{
				Area_of_circle();
			}
			else if(choice==2)
			{
				Perimeter_of_circle();
			}
			else if(choice==3)
			{
				Area_of_square();
			}
			else if(choice==4)
			{
				Area_of_rectangle();
			}
			else if(choice==5)
			{
				Area_of_triangle();
			}
			else if(choice==6)
			{
				Area_of_sphere();
			}
			else if(choice!=0)
			{
				cout <<"break";
			}
		  }while (choice!=0);
	   }
};

int main()
{
	All_geometry g1;
	g1.AllData();
	return 0;
}
