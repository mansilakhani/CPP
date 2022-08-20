/*	A fourth standard student forced by his teacher to
	identify if a given Character is Uppercase, Lowercase,
	Digit or Special Character. Write a C++ Program to help
	that student.
*/

#include<iostream>
using namespace std;

int main()
{
	char c;
	cout << "~ Enter any Character : ";           
	cin >> c;
	
	if(c>=65 && c<=90)
	{
		cout <<endl<< "- You entered an upper case character.";
	}
	else if(c>=97 && c<=122)
	{
		cout <<endl<< "- You entered an lower case character.";
	}
	else if(c>=48 && c<=57)
	{
		cout <<endl<< "- You entered a digit.";
	}
	else
	{
		cout <<endl<< "- You entered an special character.";
	}
	return 0;
}
