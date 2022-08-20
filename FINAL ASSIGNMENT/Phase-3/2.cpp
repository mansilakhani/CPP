/*

Design a system in which if a length of a String is
greater than 3 and less than 9, then it returns reverse
of that string. Otherwise, it returns sum of each
letters’ ASCII value. Use C++ for building this type of
system.

*/


#include<iostream>
#include<string.h>
using namespace std;

class String
{
	public:
		char a[100];
		int k=0, i, sum=0;
		
	public:
		
		String()
		{
			cout<<"=> Enter any string: ";
			cin>>this->a;
		}
		
		void ASCII_Value()
		{
			for(i=0;a[i]!='\0';i++)
			{
				k++;
			}
			
			if(k>=3&&k<=9)
			{
				cout << endl << "- Reverse of string :- " << strrev(a);
			}
			else
			{     
				for(i=0;a[i]!='\0';i++)
				{
					sum += a[i];
				}
				cout<<endl <<"- Sum of all letters ASCII value: "<<this->sum <<endl;
			}
		}
};

int main()
{
	String s1;
	
	s1.ASCII_Value();
	
	return 0;
}
