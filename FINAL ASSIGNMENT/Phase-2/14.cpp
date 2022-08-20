/*

Develop a solution for Income Tax Department for identify 
which person have to pay how much tax basis on his/her income 
using C++ and pre-defined percentage criteria for tax calculation.

*/


#include<iostream>
using namespace std;

class Tax_department
{
	
	private:
		int tax,n;
	
	public:
		
		Tax_department()
		{
			cout <<endl<<"=> Enter Income : ";
			cin  >>n;
	
			if(n<=200000)
			{
				cout <<endl<<"- You don't pay any Tax";
			}
			else if(n>=200000 && n<=500000)
			{
				tax=(n-200000)/10;
				cout <<endl<<"- Your Tax amount  : "<<tax;
			}
			else if(n>=500000 && n<=1000000)
			{
				tax=((n-500000)/10*2)+30000;
				cout <<endl<<"- Your Tax amount  : "<<tax;
			}
			else 
			{
				tax=((n-1000000)/10*3)+130000;
				cout <<endl<<"- Your Tax amount  : "<<tax;
			}	
		}
};

int main()
{
	Tax_department() ;
}


