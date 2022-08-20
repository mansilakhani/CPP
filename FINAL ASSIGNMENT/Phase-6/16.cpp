// Find Volume of a Box using Parameterized Constructor and figure out if that is odd or even number.

// Parameterized Constructor 


#include<iostream>
#include<string.h>
using namespace std;

class Box
{
	private:
		int volume;
		
	public:
		
		//Parameterized constructor
		Box(int l , int b , int h)
		{
			volume = l*b*h;
			cout <<endl <<"-> Volume of Box : "<<volume <<endl;
			
			if(volume%2==0)
			{
				cout <<endl <<"-> This volume of box is even number ."<<endl;
			}
			else
			{
				cout <<endl <<"-> This volume of box is odd number  ."<<endl;
			}
		}
};

int main()
{
	int l ,b,h;
	
	cout <<endl<<"=> Enter Length : ";
	cin  >> l;
	cout <<"=> Enter Breadth : ";
	cin  >> b;
	cout <<"=> Enter Height : ";
	cin  >> h;
	
	Box b1(l,b,h);
	
	return 0;
}

