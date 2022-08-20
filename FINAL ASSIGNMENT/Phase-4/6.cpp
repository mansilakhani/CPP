/*
	A Teacher gives a list to students in which a list
	contains many years in numeric format i.e 1994, 1947,
	2002, 1996, etc. All students supposed to find all
	duplicate years which occurs more than once and store
	them into another list. Design such type of system with
	help of C++.
*/


#include<iostream>
using namespace std;

int main()
{
	int i,j,n;
	
	cout << "-> Enter Size of array : ";
	cin >> n;
	cout <<endl<<"-> Elements of array : "<<endl;
	
	int a[n];
	for(i=0;i<n;i++)
	{
		cout <<"a["<<i<<"] : ";
		cin >>a[i];	
	} 

	cout <<endl<<"-> Duplicate elements : "<<endl;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				cout << " "<<a[i];
			}
		}
	}
	return 0;
}
