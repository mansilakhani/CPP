/*
	A bomb is planted at Suratgarh Railway Station. It
	can be defused by entering any number which is itself an
	Armstrong number. Design a C++ UDF which figures out if a
	given number is Armstrong or not.
*/


#include<iostream>
using namespace std;

void Armstrong(int n)
{
	int temp,r,y;
	temp = n;                  // temp = 153
	
	while(n!=0)
	{
		r = n%10;                    //  r = 153 % 10 = 3
		n = n/10;                    //  n = 153/10 = 105
		y = y + (r*r*r);             //  y =  0 + (3*3*3) =9
	}
	if(y==temp)
	{
		cout <<endl<< "-> This number is an Armstrong number.";
	}
	else
	{
		cout <<endl<< "-> This number is not an Armstrong number.";
	}
	
}

int main()
{
	int n,r,y=0,temp;
	
	cout <<endl<< "-> Enter any number : ";           // n = 153
	cin  >> n;
	Armstrong(n);
	return 0;
}
