/*
	Design an EMI Calculator for deciding accurate EMI
	price of ex-showroom car models to help an executive to
	easily guide his consumers. Use C++ to build this type of
	system.
*/

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	   float EMI ,p,r,n;
	   
	   cout << "~ Enter Loan amount(p) : ";
	   cin >> p;
	   cout << "~ Enter Interest_rate(r) : ";
	   cin >> r;
	   cout << "~ Enter Number of months(n) : ";
	   cin >> n;
	   
	   //EMI = (p * r + (1+r)*n)/(((1+r)*n)-1);
	   r= r/(12*100);
	   n=n*12;
	   EMI = (p*r*pow(1+r,n))/(pow(1+r,n)-1);
	   
	   cout <<endl<< "~ EMI amount : "<<EMI <<endl;
	   return 0;
}
