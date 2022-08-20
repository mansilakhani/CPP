/*
	Devansh gives a list of random numbers to his
	colleague Rohan to distinguish all odd and even numbers,
	and store them in different lists. Help Rohan by building
	such a solution with help of C++.
*/


#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	
	cout << "-> Enter Size of Array :";
	cin >> n;
	cout <<endl<< "-> Elements of Array : "<<endl;
	int a[n];
	for(i=0 ;i<n ;i++)
	{
		 cout << "- a["<<i<<"] : ";
		 cin >> a[i];
	}
	cout <<endl<< "-> Even number : "<<endl;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			cout <<  " "<< a[i] ;
		}
	}
	cout <<endl;
	cout <<endl<< "-> Odd number : "<<endl;
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			cout << " "<< a[i] ;
		}
	}
	return 0;
}
