/*
	Design a system in C++ which automatically transpose
	any given Matrix of RxC dimension. Where R is number of
	Rows and C is number of Columns. Help three musketeers
	for passing an interview round by solving this last
	question.
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
	cout <<endl<< "-> Enter matrix elements : "<<endl<<endl;
	
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout <<"- a["<<i<<"]["<<j<<"] : ";
			cin >>a[i][j];
		}
	}
	cout <<endl<< "-> Entered Matrix : "<<endl<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout << " "<< a[i][j];
		}
		cout << endl;
	}
	
	int tra[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			tra[i][j] = a[i][j];
		}
	}
	cout <<endl<< "-> Transpose Matrix : "<<endl<<endl;
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			cout <<" " << tra[j][i];
		}
		cout << endl;
	}
	return 0;
}
	
	
	
