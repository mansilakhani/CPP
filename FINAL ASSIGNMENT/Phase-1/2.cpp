/*	Sameer is too weak to find multiplication of any three
	numbers. Write a C++ Program which helps Sameer to solve
	his issue.
*/

#include<iostream>
using namespace std;

int main()
{
	int a[3],mult=1,i;
	
	cout <<"~ Enter 1st number : ";        cin >> a[0];
	cout <<"~ Enter 2nd number : ";        cin >> a[1];
	cout <<"~ Enter 3rd number : ";        cin >> a[2];
	
	for(i=0;i<3;i++)
	{
		mult = mult * a[i];
	}
	cout <<endl<<"~> Sameer solved his issue : "<<mult;
	return 0;
}
