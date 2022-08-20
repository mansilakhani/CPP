/*	A math teacher wants to teach how to find a Simple
	Interest. Write a C++ Program to provide a solution for
	this.
*/

#include<iostream>
using namespace std;

int main()
{
	int si,p,r,t;
	
	cout <<"---------- -: Simple Interest :- ----------"<<endl<<endl;
	cout << "~ Enter Principal : ";        cin >> p;
	cout << "~ Enter Rate : ";             cin >> r;
	cout << "~ Enter Time : ";             cin >>t ;
	
	si = (p*r*t)/100;
	
	cout << "~ Simple interest for amount : "<<si;
	return 0;
}
