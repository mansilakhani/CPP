/*
	A window on a side wall have a dimension of 10x4
	feet. Kaveri wants to apply curtains on that window such
	that a window will perfectly coverd from all sides with
	extra 2 feet. Design a C++ UDF with figures out if a
	given dimensions of curtains satisfies mentioned criteria
	or not.
*/


#include<iostream>
#include<string.h>
using namespace std;

void Dimension()
{
	int l=10 , w=4 , e_l=2 , k;
	
	cout <<"-----------------------------------------------------------------";
	cout <<endl<<"/*  A window on a side wall have a dimension of 10x4 feet  */"<<endl;
	cout <<"-----------------------------------------------------------------"<<endl;
	
	cout <<endl<<"=> For Covering  all sides of window : "<<endl;
	
	k = (l*w)+(4*e_l);
	
	cout <<endl<<" - Dimensions of curtains : "<<k;
}

class WC_Dimension
{
	public:
		void setData()
		{
			Dimension();
		}
};

int main()
{
	WC_Dimension w1;
	w1.setData();
	
	return 0;
}
