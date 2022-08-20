/*	Two classmates wants to exchange their seating with
	each other. But the problem is that there are only two
	chairs in the small classroom which already aquires by
	them. Write a C++ Program which provides a solution for
	this particular problem.
*/

#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout << "~ Enter value of a : ";        cin >> a;
	cout << "~ Enter value of b : ";        cin >> b;
	cout <<endl<<"~> Before Exchange  : "<<endl <<"-  a = "<<a <<endl <<"-  b = "<<b <<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout <<endl<<"~> After Exchange : "<<endl <<"-  a = "<<a <<endl <<"-  b = "<<b <<endl;
	return 0;
}	
