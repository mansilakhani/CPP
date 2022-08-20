/*	A sport coach needs to convert submitted participants’
	inches into feet and inches for height measurement. Write
	a C++ Program to provide a solution for this.
*/

#include<iostream>
using namespace std;

int main()
{
	float inches ,feet,height;
	
	cout <<endl<< "-> Enter height  : ";       
	cin >>inches;
	
	//inch = height/2.54;
	height = inches *2.54;
	feet = inches/12;
	
	
	cout <<endl<< "-> The distance of feet : "<<feet <<endl;
	cout <<endl<< "-> The distance of inches : "<<height;
	return 0;
}



