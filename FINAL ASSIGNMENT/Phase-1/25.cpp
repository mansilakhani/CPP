/*	By using an easy technique, Write a C++ program to
	Find Largest Number among four numbers to help Prisha
	boost-up her confidence in logical building process.
*/

#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d;
	
	cout << "~ Enter value of a: ";
	cin >> a;
	cout << "~ Enter value of b: ";
	cin >> b;
	cout << "~ Enter value of c: ";
	cin >> c;
	cout << "~ Enter value of d: ";
	cin >> d;
	if(a==b && b==c && c==d)
	{
		cout <<endl<< "-> All values are same ";
	}
	else
	{
	  if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				cout <<endl<< "-> a is max";
			}
			else
			{
				cout <<endl<< "-> d is max";
			}
		}
		else
		{
			if(c>d)
			{
				cout <<endl<< "-> c is max";
			}
			else
			{
				cout <<endl<< "-> d is max";
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				cout <<endl<< "-> b is max";
			}
			else
			{
				cout <<endl<< "-> d is max";
			}
		}
		else
		{
			if(c>d)
			{
				cout <<endl<< "-> c is max";
			}
			else
			{
				cout <<endl<<"-> d is max";
			}
		}
	 }	
   }
   return 0;
}
