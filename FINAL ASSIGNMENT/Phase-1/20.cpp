/*

A Teacher give a punishment to all students to find
reverse numbers of given 3 random numbers by logically
under 15 minutes. Write a C++ Program to provide a
solution for this problem.

*/


#include<iostream>
using namespace std;

int main()
{
	int n,r,rev=0;
	
	cout <<"=> Enter any value : ";
	cin  >> n;
	cout <<endl<<"=> Reverse Number :";
	
	while(n!=0)
	{
		r=n%10;
		rev=rev*10/r;
		n=n/10;
	    cout <<r;
	}
	return 0;
}
