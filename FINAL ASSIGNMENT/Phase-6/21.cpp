/*

Build a C++ solution which returns array of all ASCII
values of alphabets skipping 3 characters. Use concept of
Constructors. After returning that array, find addition
of that values and decide whether it is a odd or even
number.

*/


#include<iostream>
#include<string.h>
using namespace std;

class Alphabets
{
	private :
		char i;
		int k = 0;
		int s=0;
		
	public :
		
		Alphabets()
		{
			cout <<"=> All ASCII value of Alphabets : "<<endl<<endl;
			for(i='a';i<='z';i+=3)
			{
				k= k+i;
				cout <<"- Character  "<<i <<" = " <<int(i) <<endl;
			}
			for(i='a';i<='z';i+=3)
			{
				s= s+i;
			}
			cout <<endl<<"=> Sum of a Character : "<<s <<endl;
			
			if(k%2==0)
			{
				cout <<endl<<"=> Even Number...";
			}
			else
			{
				cout <<endl<<"=> Odd Number...";
			}
		}
};

int main()
{
	Alphabets();
	return 0;	
}	
 
