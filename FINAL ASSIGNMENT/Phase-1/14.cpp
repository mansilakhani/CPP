/*	Gaurav must have to teach his little 5 years old baby
	to check whether a given year is leap year or not. Write
	a C++ Program to provide a solution for Gaurav.
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "~ Enter any value: ";
	cin >> n;
	
//	if (n%4==0 || n%400==0 && n%100!=0)
    if(n%4==0)
	{
		cout <<endl <<"- Leap year";
	}
	else
	{
		cout <<endl <<"- Not leap year";
	}
	return 0;
}
