/*
	Sameer needs to master a technique to find if a given
	number is Prime number or not for his best presentation
	at the Teachers Day to impress his Math teacher. Help
	sameer to Write a C++ Program with best technique.
*/

#include<iostream>
using namespace std;

int main()
{
	int i,n,count=0;
	
	cout << "~ Enter any number : ";
	cin >> n;
	
	for(i=2;i<=n;i++)
	{
		if(n%i!=0)
		{
			count++;
		}
	}
	if(count==n-2)                                
	{
		cout <<endl <<"-> This number is a prime number.";
	}
	else
	{
		cout <<endl <<"-> This number is not a prime number.";
	}
	return 0;
}
