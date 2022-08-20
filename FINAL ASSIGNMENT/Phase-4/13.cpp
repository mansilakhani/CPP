/*	
	A Math teacher wants to teach how to perform a dot
	product of two matrices. Design a better approach in C++
	to help this math teacher.
*/

#include<iostream>
using namespace std;

int main()
{
	int r,c,i,j;
	
	cout << "-> How many rows : ";
	cin >>r;
	cout << "-> How many cols : ";
	cin >>c;
	cout <<endl<<"-> Enter Matrix elements : "<<endl <<endl;
	
	int a[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout << "a["<<i<<"]["<<j<<"] : ";
			cin >> a[i][j];
		}
	}
	
	cout <<endl <<"-> Entered Matrix : "<<endl;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout <<" " <<a[i][j];
		}
		cout << endl;
	}
	
	cout <<endl<<"-> Enter Matrix elements : "<<endl <<endl;
	
	int b[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout << "b["<<i<<"]["<<j<<"] : ";
			cin >> b[i][j];
		}
	}
	
	cout <<endl <<"-> Entered Matrix : "<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout <<" " <<b[i][j];
		}
		cout << endl;
	}
	
	//Displaying the multiplication of two matrix.
	
	cout <<endl<< "-> Product of two matrices : "<<endl<<endl;
	int d[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		      d[i][j] = a[i][j] * b[i][j];
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		      cout <<" "<< d[i][j];
		}
		cout <<endl;
	}
	
	return 0;
}
