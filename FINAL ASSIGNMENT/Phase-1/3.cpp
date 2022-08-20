/*	A student in a fifth class encounters a very easy math
	problem to find quotient and remainder. Write a C++
	Program which provides a solution for this particular
	problem.
*/

#include<iostream>
using namespace std;

int main()
{
	int quoti,rem,divisor,dividend ;
	
	cout << "~ Enter any dividend : ";    cin >> dividend ;
	cout << "~ Enter any divisor : ";      cin >>divisor ;
	
	//Quotient
	quoti=  dividend / divisor;
	
	//Remainder
	rem  =  dividend % divisor;
		
	cout <<endl<< "~> Quotient : "<<quoti <<endl;
	cout << "~> Remainder : "<<rem ;
	return 0;
}

