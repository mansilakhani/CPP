/*	
	Write a C++ program to Print Table of any Number less
	than 10. A group of needy newbie math students will
	appriciate your help for your help.
*/

#include<iostream>
using namespace std;

int main()
{
	int i,j,sum,n;
	cout <<"~> Enter any number : ";
	cin >> n;
	cout <<endl<< "~> Multiplication Table : "<<endl;
	if(n<=10)
	{
		for(i=1;i<=n;i++)
		{
		for(j=1;j<=10;j++)
			{
			sum = i*j;
			cout << i <<"*"<<j <<"="<<sum<<endl;
			}
			cout<<endl;
		}
	}
	else
	{
		cout << "- Invalid input ..";
	}
	return 0;
}
