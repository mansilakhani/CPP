/*	Write a C++ Program which finds the area of triangle
	whose base is 56 units and height is 21 units. Also print
	sum of all digits of that area of triangle.
*/

#include<iostream>
using namespace std;

int main()
{
	int area, base = 56, height =21 ;
	int rev=0 , sum=0;
	
	area = (base*height)/2 ;
	
	cout << "~> Area of triangle : "<<area <<endl;
	
	while(area >0)
	{
		rev = area % 10;
		area = area /10;
		sum = sum + rev;
	}
	cout <<endl<<"~> Sum of all digits of area of triangle : "<<sum;
	return 0;
}
