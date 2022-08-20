/*	Write a C++ Program to find Fibonacci Series upto N
	numbers to help Darshan by passing fastest-finger first
	round for entering Coding Quiz competition.
*/

#include<iostream>
using namespace std;

int main()
{
	int i,n;
	int t1=0 ,t2=1 ,s;
	//int s= t1+t2;
	
	cout << "~ Enter any number : ";
	cin >> n;
	
	cout <<endl<<"->Fibonacci Series : " <<s;
	for(i=2;i<n;i++)
	{
		s= t1+t2;
		cout <<"," <<s ;
		t1=t2;
		t2=s;
	}
	return 0;
}
