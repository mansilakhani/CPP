/*
	The two short sides of a right triangle are 6 cm and
	13 cm. Find the length of the third side using Pythagoras
	Theorem with help of C++.
*/


#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

class Sides
{
	private :
		
		int AB ;                //  AC^2 = AB^2 + BC^2 
		int BC ;
		int AC ;
		int p;
		
	public :
	
		void Side_setData()
		{
			this->AB = 13;
			this->BC = 6;
			cout <<endl<<"-------------------------------------"<<endl;
			cout <<"=> AC^2 = AB^2 + BC^2 :- "<<endl;
			cout <<"-------------------------------------"<<endl;
			cout <<endl<<"=> First Side  (AB) : "<<this->AB;
			cout <<endl<<"=> Second side (BC) : "<<this->BC;
			cout <<endl<<endl<<"-------------------------------------";
		} 
		
		void getData()
		{
			AC = (AB*AB)+(BC*BC);
			p  =  sqrt(AC);
		    cout <<endl<<"=> Third Side  (AC) : "<<p <<endl;
		    cout <<"-------------------------------------"<<endl;
		}
};

int main()
{
	Sides s1;
	
	s1.Side_setData();
	s1.getData();
	
	return 0;
}
