/* 	WAP that defines a shape class with a constructor that gives value  to width and height. 
	The define two sub-classes triangle and rectangle, that calculate the area of the shape area ().
 	In the main, define two variables a triangle and a rectangle and then call the area() function in this two varibles.
*/


#include<iostream>
using namespace std;

class Shape
{
	public:
		int width;
		int height;
		
	public:
	/*	void ShapeData()
		{
			cout << "~> Enter width : ";       cin >> this->width;
			cout << "~> Enter height : ";       cin >> this->height;
		}*/
		Shape()
			{
				cout << "~> Enter width : ";       cin >> this->width;
				cout << "~> Enter height : ";       cin >> this->height;
			}
		void getData()
			{
				cout <<"- Width : "<<this->width <<endl 
					 <<"- Height : "<<this->height<<endl;
			}
};

class Rectangle : public Shape
{
	public:
		int area;
		
	public:
		void RectangleData()
		{
			area = width * height;
			cout <<endl<<"- Area of rectangle : "<<area;
		}
};
class Triangle : public Shape
{
	public:
		int area;
		
	public:
		void TriangleData()
		{
			area = (width * height)/2;
			cout <<endl<< "- Area of Triangle : "<<area;
		}
};

int main()
{
	Rectangle r;
	Triangle t;
	
	cout<<endl<<"--------- -: Find Area of Rectangle :- ---------"<<endl<<endl;
	r.getData();
	r.RectangleData();
	
	cout<<endl<<endl<<"---------- -: Find Area of Triangle :- ----------"<<endl<<endl;
	t.getData();
	t.TriangleData();
	return 0;
}
