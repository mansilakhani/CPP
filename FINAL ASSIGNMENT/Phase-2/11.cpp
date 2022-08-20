/*
	A Mountain Tracker needs a Temperature Converter for
	maintaining his tracking at Mount Everest. Build temperature
	converter for that tracker using C++ as your primary language.
*/


#include<iostream>
using namespace std;

int main()
{
	float celsius ,fahrenheit ,option;
	
	cout << "* 1. Celsius to Fahrenheit : "<<endl;
	cout << "* 2. Fahrenheit to Celsius  : "<<endl;
	
	cout <<endl<< "~> Enter any option : ";
	cin >> option ;
	
	//convert celsius into fahernheit
	
	if(option == 1)
	{
		 cout <<endl<< "~> Enter temperature in celsius : ";
		 cin >> celsius;
		 
		 fahrenheit = (celsius * 1.8)+32;
		 
		 cout <<endl<< "~> Temperature in degree fahrenheit : "<<fahrenheit <<endl;
	}
	
	//convert  fahernheit into celsius
	
	else if(option == 2)
	{
		 cout <<endl<< "~> Enter temperature in fahrenheit  : ";
		 cin >> fahrenheit ;
		 
		 //(9/5)=1.8
		 celsius = (fahrenheit-32)/1.8;
		 
		 cout << "~> Temperature in celsius  : "<<celsius  <<endl;
	}
	else
	{
		cout << "~> Wrong input...";
	}
	
	return 0;
}

