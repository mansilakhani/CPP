/*

Reserve Bank of India pre-defines a Rate of Interest
(ROI) for all banks across the Nation. But some private
sector banks can apply different ROI. Use inheritance and
polymorphism concept to illustrate this scenario.

*/


#include<iostream>
#include<string.h>
using namespace std;

class BOB 
{
	public :
		
		void R_of_Int()
		{
			cout<<"------------------- * BOB * -------------------"<<endl;
			cout <<endl<<"=> Pre-defines a Rate of Interest is 7.25% "<<endl<<endl;
		}
};

class SBI : public BOB
{
	public :
		
		void R_of_Int()
		{
			cout<<"------------------- * SBI * -------------------"<<endl;
			cout <<endl<<"=> Pre-defines a Rate of Interest is 6.25% "<<endl<<endl;
		}
};
	
class RBI : public SBI
{
		public :
		
		void R_of_Int()
		{
			cout<<"------------------- * RBI * -------------------"<<endl;
			cout <<endl<<"=> Pre-defines a Rate of Interest is 3.35% "<<endl<<endl;
			BOB::R_of_Int();
			SBI::R_of_Int();
		}
};

int main()
{
	RBI r1;
	r1.R_of_Int();
	return 0;
}
