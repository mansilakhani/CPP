/*	By writing a logic for checking if a given number is
	Armstrong or Not, Mayur will be qualified for an entrance
	exam. Write a C++ Program for Mayur to qualify.
*/

#include<iostream>
using namespace std;

int main()
{
	int n,r,y=0,temp;
	cout << "~ Enter any number : ";
	cin >> n;
	
	temp = n;
	
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		y=y+(r*r*r);
	}
	if(y==temp)
	{
		cout <<endl<<"- Armstrong Numnber.";
	}
	else
	{
		cout <<endl<<"- Not Armstrong Numnber";
	}
	return 0;
}
