/*	A brand new smart device which meant to convert total
	provided Days Into Years, Weeks and Days. But for some
	technical interruption, that device stops working
	properly. Write a C++ Program to provide a solution for
	this.
*/

#include<iostream>
using namespace std;

int main()
{
	int days,years,weeks,n;
	
	cout << "~> Enter days : ";
	cin >> n;
	
	years = n/365;
	weeks = (n%365)/7;
	days = n - ((years * 365)+ (weeks * 7));
	
	cout <<endl<< "~  Years :  "<<years;
	cout <<endl<< "~  Weeks :  "<<weeks;
	cout <<endl<< "~  Days :  "<<days;
	
	return 0;
	
}


