/*	
	Create a addition logic to find sum of all digits of
	a given number to surpass a very challenging dream of
	Tanmay. Write a C++ program to develop this system for
	Tanmay.
*/

#include<iostream>
using namespace std;

int main()
{
	int rem,sum=0,num;
	
	cout << "~ Enter any number : ";
	cin >> num;
	
	while(num > 0)
	{
		rem = num %10;
		sum = sum + rem;
		num = num/10;
	}
	cout <<endl<< "~ Sum of all digits : "<<sum;
	return 0;
}
