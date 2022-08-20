/*	
    Tushar is trying very hard to teach his classmate
	Harsh that how to find Factorial of a Number. Write a C++
	Program for Tushar with best possibe technique.
*/

#include<iostream>
using namespace std;

int main()
{
	int i,n,a=1;
	cout << "~ Enter any value : ";
	cin >> n;
	
	for(i=1;i<=n;i++)
	{
		a=a*i;
	}
	cout <<endl<<"~ Factorial number is : "<<a;
	return 0;
}
