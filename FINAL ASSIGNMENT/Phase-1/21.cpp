/*
 	Priya wants to teach his newly enrolled boy that how
	to find number of Digits in any number. Write a C++
	Program to provide a solution for this problem.
*/


#include<iostream>
using namespace std;

int main()
{
	int n,c=0;
	
	cout << "~ Enter any number : ";
	cin >> n;
	
	while (n>0)
	{
		n=n/10;
		c++;
	}
	cout <<endl<< "~> Number of Digits : "<<c <<endl;
	
	return 0;
}
