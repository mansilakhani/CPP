// WAP to add two distance using binary plus(+) operator overloading . - Method-1

 
#include<iostream>
#include<string.h>
using namespace std;

class Distance 
{
	private :
		int inches;
		int feet;
		
	public :
		void setData()
		{
			cout <<"-> Enter feet : ";
			cin  >> this->feet;
			cout <<"-> Enter inches : ";
			cin  >> this->inches;	
		}	
		
		void getData()
		{
			cout <<"-> Feet :  "<<this->feet <<endl
				 <<"-> Inch : "<<this->inches <<endl;
		}
		
		Distance operator+(Distance n)
		{
			Distance temp;
			temp.inches = this->inches + n.inches;
			temp.feet = this->feet + n.feet + (temp.inches/12);
			temp.inches = temp.inches %12;
			
			return temp;
		}
};

int main()
{
	Distance d1,d2,d3;
	
	cout <<"..........-: Enter Distance:1 :- .........."<<endl<<endl;
	d1.setData();
	
	cout <<endl<<"..........-: Enter Distance:2 :- .........."<<endl<<endl;
	d2.setData();
	
	cout <<endl<<"...........-: Total Distance :- ..........."<<endl<<endl;
	
	d3 = d1+d2;        //  d3 = d1.operator+(d2)
	d3.getData();
	return 0;
} 
