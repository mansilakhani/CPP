/*
	A scientist wants to create a scientific calculator
	which only contains functionalities like:
 	maximum number from 3 number
 	square of a given number.
 	square root of a given number.
 	components of a given number.
	Design a C++ system to help this scientist by using UDFs.
*/

#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

void S_Calculator()
{
	int i,n,sqr;
	
 	cout <<endl<<"-> Enter any value : ";
	cin  >> n;
	
	cout <<endl<<"---------------------------------------"<<endl;
	cout <<"=> Find Maximum number from 3 number : ";
	cout <<endl<<"---------------------------------------"<<endl;
	cout <<endl<<"-> Elements of Array : "<<endl<<endl;
	int a[n];
	for(i=0;i<n;i++)
	{
		cout << "- a["<<i<<"] : ";
		cin  >> a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[0]<a[i])
		{
			a[0]=a[i];
		}
	}
	cout <<endl<< "-> Maximum number : "<<a[0];
	
	cout <<endl<<endl<<"------------------------------------------"<<endl;
	cout <<"=> Find square of a given number  : ";
	cout <<endl<<"------------------------------------------"<<endl;
	cout <<endl<<"-> Elements of Array : "<<endl<<endl;
	for(i=0;i<n;i++)
	{
		cout << "- a["<<i<<"] : ";
		cin  >> a[i];
	}
	cout <<endl<<"-> Square of a given number : "<<endl;
	for(i=0;i<n;i++)
	{
		sqr = a[i]*a[i];
		cout <<endl<<"- "<<sqr;
	}
	
	cout <<endl<<endl<<"------------------------------------------"<<endl;
	cout <<"=> Find square root of a given number : ";
	cout <<endl<<"------------------------------------------"<<endl;
	cout <<endl<<"-> Elements of Array : "<<endl<<endl;
	for(i=0;i<n;i++)
	{
		cout << "- a["<<i<<"] : ";
		cin  >> a[i];
	}
	cout <<endl<<"-> Square root of given number : "<<endl;
	int b[n];
	for(i=0;i<n;i++)
	{
		b[i]=sqrt((a[i]));
		cout <<endl<<"- "<<b[i];
	}
}

class Calculator
{
	public :
		 
		 void C_Data()
		 {
		 	S_Calculator();	
		 }	
};
 
int main()
{
	Calculator c1;
	c1.C_Data();
	return 0;	
}
