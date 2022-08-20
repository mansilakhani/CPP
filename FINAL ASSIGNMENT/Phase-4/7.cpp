/*
	A Frontman can randomly assign two 3x3 matrices to all
	participants in Squid Games. All participants have to add
	that matrices and store final answer as a separate matrix
	to win this type of round in the game. Build a C++ system
	to help them all.
*/

#include<iostream>
using namespace std;

int main()
{
	int i,j;
	
	cout <<"-> Enter 3*3 Matrix : "<<endl;
	cout <<endl<< "-> Enter Size of Array 1 : "<<endl<<endl;
	
	int a[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout << "a["<<i<<"]["<<j<<"]: ";
			cin >> a[i][j];
		}
	}
	cout <<endl<<"-> Elements of array 1 : "<<endl<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout <<" " <<a[i][j];
		}
			cout <<endl;
	}
	cout << endl <<"-------------------------------"<<endl <<endl;
	
	cout << "-> Enter Size of Array 2 : "<<endl<<endl;
	int b[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout << "b["<<i<<"]["<<j<<"]: ";
			cin >> b[i][j];
		}
	}
	cout <<endl<<"-> Elements of array 2 : "<<endl<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout  <<" " << b[i][j];
		}
		cout <<endl;
	}
	cout << endl <<"-------------------------------"<<endl <<endl;
	int c[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	cout <<"-> Sum of two matrix : "<<endl<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout << " " <<c[i][j];
		}
		cout << endl;
	}
	return 0;
}
