/* 1. WAP to create a class to read and add two distance. 
   (e.g. 8 feet 16 inch + 4 feet 14 inch = 14 feet 6 inch)       
*/

#include<iostream>
using namespace std;

class Distance
{
	public:
	int feet;
	float inch;
};

int main()
{
	Distance d1 ,d2,sum;
	cout << "Enter 1st distance:-"<<endl <<endl;
	
	cout << "Enter value of feet: ";
	cin >> d1.feet;
	cout << "Enter value of inch: ";
	cin >> d1.inch;
	cout << endl<<"----------------------------------"<<endl <<endl;
	
	cout << "Enter 2st distance:-"<<endl <<endl;
	cout << "Enter value of feet: ";
	cin >> d2.feet;
	cout << "Enter value of inch: ";
	cin >> d2.inch;
	
	cout << endl<<"----------------------------------"<<endl <<endl;
	sum.feet= d1.feet+d2.feet;
	sum.inch= d1.inch+d2.inch;
	
	if (sum.inch > 12)
	{
	/*	sum.feet++;
		sum.inch=sum.inch-12;*/
		int extra = sum.inch/12;
		sum.feet=sum.feet + extra;
		sum.inch=sum.inch-(extra*12);
	}
	
	cout << "Sum of two distance: =  "<<sum.feet << " feet " <<sum.inch <<" inch ";
	return 0;
}
