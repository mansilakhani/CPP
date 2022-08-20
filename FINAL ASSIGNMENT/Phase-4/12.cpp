/*
	A College wants to celebrate all degree holder
	students to throwing their hats in a predefined way:
	First all 25 students have to arranged in a Square
	Matrix. First, an upper half of triangle matrix will
	throwing hats and then a lower half of triangle matrix
	will. Help them to achieve this unique idea by using C++.
*/


#include<iostream>
using namespace std;

int main()
{
	int r,c,i,j;
	
	cout << "-> How many rows : ";
	cin >> r;
	cout << "-> How many cols : ";
	cin >> c;
	cout <<"-> Enter Size of array : "<<endl<<endl;
	
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout << "a["<<i<<"]["<<j<<"] : ";
			cin >> a[i][j];
		}
	}
	cout <<endl<<"-> Enter Matrix : "<<endl<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout <<" " <<a[i][j];
		}
		cout << endl;
	}
	cout <<endl<<"-> Lower triangular matrix : "<<endl<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i<j)
			{
				cout  << " 0";
			}
			else
			{
				cout <<" "<<a[i][j];
			}
		}
		cout << endl;
	}
	cout <<endl<<"-> Upper triangular matrix : "<<endl<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i>j)
			{
				cout << " 0";
			}
			else
			{
				cout <<" "<<a[i][j];
			}
		}
		cout << endl;
	}
	return 0;
}
