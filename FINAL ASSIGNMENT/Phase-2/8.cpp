/*
	A Computer Teacher wants to teach a 10th standard
	class taht how a computer converts any decimal value into
	binary value. Help that teacher by developing C++ program
	for this urpose.
*/

#include<iostream>
using namespace std;

int main()
{
	int n,bin;
	
	cout << "~ Enter any number : ";
	cin >> n;
	
	cout <<endl<<"~ Decimal value to Binary value : ";
	while(n>0)
	{
		bin = n%2;
		n=n/2;
	    cout << bin;
	}
	return 0;
}
