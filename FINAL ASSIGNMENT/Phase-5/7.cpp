/*
	Ajay has to find Fibonacci Series upto given number to
	successfully pass in Math’s examination. Help him by
	designing a UDF in C++.
*/


#include<iostream>
#include<string.h>
using namespace std;

void Fibonacci_series(int n)
{
	 int i,t1=0,t2=1,s;
	 for(i=0 ;i<n ;i++)
	{
		
		cout  << s  <<",";
		t1=t2;
		t2=s;
		s= t1+t2;
	}
}

int main()
{
	int i,n;

	cout <<endl<<"-> Enter range : ";
	cin  >> n;
	
	cout <<endl << "-> Fibonacci Series of given number : ";
	
	Fibonacci_series(n);
	return 0;
}
