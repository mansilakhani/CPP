/*

Jemin wants to create an automate system which
compare two given strings and it returns 1 if both
strings are same and 0 otherwise. Create a C++ system for
helping Jemin using overloading concept.

*/


#include<iostream>
#include<string.h>
using namespace std;

class String
{
	public:
		
		int setdata(char a[], char b[])
		{
			if(strcmp(a,b)==0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
};

int main()
{
	String s1;
	char f[100], s[100];
	int n;
	
	cout<<endl<<"=> Enter First Message : ";
	gets(f);
	cout<<endl<<"=> Enter Second Message : ";
	gets(s);
	
	n=s1.setdata(f,s);
	
	if(n==1)
	{
		cout<<endl<<"=> Both Message is Same..."<<endl;
	}
	else
	{
		cout<<endl<<"=> Both Message isn't Same..."<<endl;
	}
	
	return 0;
}


