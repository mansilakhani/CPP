/*	
	An innocent boy must have to solve that how to raise
	any number(Base) to power N for proving his common
	ability among all classmates. Write a C++ Program to
	provide a solution for this boy.
*/


#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float base , exponent ,result;
	
	cout << "~ Enter base : ";
	cin >> base;
	cout << "~ Enter Exponent : ";
	cin >> exponent;
	
	result = pow(base,exponent);                  // ex:  (2)^3 = 8 
	
	cout <<endl<<"~> Solution : "<<endl <<"-  "<<base << " ^ " <<exponent << " = "<<result;
	
	return 0 ;
}
