/*
	Develop a solution for Akshay by which he can retrieve
	factorial of all numbers between given range of two
	numbers using a C++ user defined function (UDF).
*/


#include<iostream>
using namespace std;

void factorial()
{

	int n1,n2,i,j,fact=1;
	
	cout <<endl<< "-> Enter Starting number (n1) : ";
	cin  >> n1;
	
	cout <<endl<< "-> Enter Ending number (n2) : ";
	cin  >> n2;
	
	cout <<endl<< "-> Factorial number between given range of two number : ";
	{
		for(i=n1; i<=n2 ;i++)
		{
			fact = fact * i;
		}
		cout << fact <<endl;
	}
	
}

class A_Solution
{
	public :
		void A_Data()
		{
			factorial();
		}
};

int main()
{
	A_Solution a1;
	a1.A_Data();
	return 0;
}





