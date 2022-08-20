/*

Calculate an Electricity Bill of a House of one month
based on total units burned. Develop a C++ solution for
this calculation.

*/


#include<iostream>
#include<string.h>
using namespace std;

class Electricity_Bill
{
	private:
		int unit;
		int total;
		int t;
		
	public:
		
		Electricity_Bill()
		{
			cout <<endl<<"=> Enter Total Unit Usage : ";
		    cin  >> unit;
		}
		
		void getData()
		{
			if(unit>0 && unit<=100)
			{
				cout <<endl<<"=> Your Bill Amount : ";
				cout <<unit*5;	
			}	
			else if(unit>100 && unit<=200)
			{
				cout <<endl<<"=> Your Bill amount : ";
				cout <<(100*5)+(unit-100)+7;
			}
			else if(unit>200 && unit<=300)
			{
				cout <<endl<<"=> Your Bill amount : ";
				cout <<(100*5)+(100*7)+(unit-200)*10;
			}
			else
			{
				cout <<endl<<"=> Your Bill amount : ";
				cout <<"No value";
			}
		}	
};

int main()
{
	Electricity_Bill e1;
	e1.getData();
	return 0;
}
