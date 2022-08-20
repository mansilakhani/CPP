/*	Two friends are playing a game in which they have to
	check whether a given number is Even or Odd. Help them to
	Write a C++ Program for that.
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "~ Enter any value: ";
	cin >> n;
	
	if(n%2==0)
	{
		cout <<endl<< "- Even number.";
	}
	else
	{
		cout <<endl<< "- Odd number.";
	}
	return 0;
}
