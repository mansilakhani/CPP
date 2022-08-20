/*
Build a C++ system  which predict a total profit of a Cashew 
Company in Goa.If this company sells 1,23,500 piece of cashews in 
1 month,then it generates total of ?.78,000 in a month.Help this company
by producing 10X more cashews in 3 months and display total revenue 
with increment percentage.

*/


#include<iostream>
#include<string.h>
using namespace std;

class Cashew
{
	private:
		int c=123500, Rs=78000, S_C , amt , p;
		
	public:
		
		void sell()
		{
			S_C = c*10;
			
			amt = Rs*10;
			
			p = ((S_C*100)/c)/3;
		}
		
		void getdata()
		{
			sell();
			
			cout<<endl<<"-> This Company should Producing "<<S_C<<" Cashew."<<endl;
			
			cout<<endl<<"-> Total Revenue with increment percentage is : "<<p<<"%"<<endl;
			
		}
};

int main()
{
	Cashew c1;
	
	c1.getdata();
	
	return 0;
}

