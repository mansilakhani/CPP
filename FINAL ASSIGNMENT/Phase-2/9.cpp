/*
	A Hospital Staff needs a BMI Calculator for rapidly
	check BMI values of any patient. Design a BMI Calculator
	by using C++ to provide this facility to all Hospital
	staff members.
*/


#include<iostream>
using namespace std;

int main()
{
	float weight , height , BMI ;
	
	cout << "~> Enter weight : ";
	cin >> weight;
	cout << "~> Enter Height : ";
	cin >> height;
	
	// BMI = Body Mass Index              
	 BMI = weight/(height*height);                        // BMI = kg^2/m^2;
	
	cout <<endl<<"~ BMI value of any patient : "<<BMI <<endl;
	
	return 0;
}
