/*

Create a C++ Base class Shape with a constructor for
providing values for width and height. Then define two
derived classes Triangle and Rectangle, that calculate
the area of the shape area(). In the main, define two
objects: a triangle and a rectangle and then call the
area() function by this two objects.

*/


#include<iostream>
#include<string.h>
using namespace std;

class Shape
{
	public :
		
		int width;
		int height;
		
	public :
		
		void S1_Data()
		{
			cout <<"- Enter Width : ";
			cin  >>this->width;
			cout <<"- Enter Height : ";
			cin  >>this->height;
		}
};

class Triangle : public Shape
{
	public:
		int area;
		
	public :
		
		void T_Data()
		{
			S1_Data();
			
			area = (width*height)/2;
			
			cout <<endl<<"- Area of Triangle : "<<area <<endl;
		}
};

class Rectangle : public Shape
{
	public:
		int area;
		
	public :
		
		void r_Data()
		{
			S1_Data();
			
			area = (width*height);
			
			cout <<endl<<"- Area of Rectangle : "<<area <<endl<<endl;
		}
};


int main()
{
	Rectangle r1;
	Triangle T1;
	cout<<"-------------------------------------"<<endl;
	cout <<"=> Find Area of Rectangle :- "<<endl;
	cout<<"-------------------------------------"<<endl;
	r1.r_Data();
	cout<<"-------------------------------------"<<endl;
	cout <<"=> Find Area of Triangle :- "<<endl;
	cout<<"-------------------------------------"<<endl;
	T1.T_Data();
	return 0;
}
