/* 	Raman have an idea to impress his Computer Teacher by
	solving Square Root of a number without using any
	programming library. Write a C++ Program to help Raman.
*/

#include<iostream>
using namespace std;

int main()
{
	float a,n,i;
	cout << "~ Enter any value: ";       
	cin >> n;
	
	a = n;
	
	for (i=0;i<n;i++)
	{
		a = (a+n/a)/2 ;
	}
	cout <<endl<< "~ Square of a number is : "<<a;
	return 0;
}
