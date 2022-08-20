/*

Prince wants to create a 24 Hr time convertor app in
C++. In this app, user can provide any 24 Hr time he/she
wants but output must be produced in 12 Hr format.
For example,
i/p: 15 Hr, 32 Minutes
o/p: 3:32 PM

*/


#include<iostream>
#include<string.h>
using namespace std;

class Time_Convertor
{
	private:
		int hr;
		int min;
		
	public:
	
		Time_Convertor()
		{
			cout <<endl<<"=> Enter Hour : ";
			cin  >>this->hr;
			cout <<endl<<"=> Enter Minute : ";
			cin  >>this->min;
		}
		
		void TC_getData()
		{
			if(hr<=12)
			{
				cout <<endl<<"=> Time(12 hr) : "<<hr <<":" <<min	<<endl;
			}	
			else
			{
				cout <<endl<<"=> Time(12 hr) : "<<hr-12 <<":" <<min <<endl; 
			}
		}	
};

int main()
{
	Time_Convertor t;
	t.TC_getData();
	return 0;
}
