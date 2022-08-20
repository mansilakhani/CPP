/*

Design a C++ system which automatically identifies if a given 
word contains any letter or symbol between both SHIFT keys from 
our regular PC Keyboard.

*/

#include<iostream>
#include<string.h>
using namespace std;

class Keyboard
{
	private:
		char a[100];
		int i;
		
	public:
		Keyboard()
		{
			cout<<"=> Enter any string :- "; cin>>this->a;
		}
		
		void Shift()
		{
			cout<<endl<<"- All letter or symbol between both SHIFT keys is :- ";
			for(i=0;a[i]!='\0';i++)
			{
				if(a[i]=='z'||a[i]=='x'||a[i]=='c'||a[i]=='v'||a[i]=='b'||a[i]=='n'||a[i]=='m'||
				   a[i]=='Z'||a[i]=='X'||a[i]=='C'||a[i]=='V'||a[i]=='B'||a[i]=='N'||a[i]=='M'||
				   a[i]==','||a[i]=='.'||a[i]=='/'||a[i]=='<'||a[i]=='>'||a[i]=='?')
				   {
				   	 cout<<a[i];
				   }
			}
		}
};
int main()
{
	Keyboard k1;
	
	k1.Shift();
	
	return 0;
}


