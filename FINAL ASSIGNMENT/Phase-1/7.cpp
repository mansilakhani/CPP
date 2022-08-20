/*	Priyank needs to find an average of three numbers to
	gain required passing marks in exam. Write a C++ Program
	to helps Priyank to solve his issue.
*/


#include<iostream>
#include<string.h>
using namespace std;

int main()

{
	int p,m,c,avg=0;
			
	cout<<endl<<" * Enter Mark of Physics : ";
	cin>>p;
	cout<<" * Enter Mark of Chemistry : ";
	cin>>c;
	cout<<" * Enter Mark of Maths : ";
	cin>>m;
			
	avg=(p+c+m) / 3;
			
	cout<<endl<<"  -----------------------------------"<<endl;
	cout<<" * Passing Marks  : "<<avg<<endl;
	cout<<"  -----------------------------------"<<endl;
	
	return 0;	
}

