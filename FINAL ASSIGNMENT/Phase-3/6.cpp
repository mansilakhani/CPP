/*

Design a system for “Dare to Win” game scenario. In this game, two participants have to guess any situation or work which 
he/she wants to be done by opposition player. So both player write their itended dare works and now a system will swap that 
both dare works and provide that to other opposite players. Write a C++ program to help swapping that dare works.

*/

#include<iostream>
#include<string.h>
using namespace std;

class DareGame
{
	private:
		char a[100],b[100],c[100],name1[100],name2[100];
	
	public:
	    DareGame()
		{
			cout<<"=> Enter first name: ";
			cin>>this->name1;
			cout<<"=> Enter Dare 1: "; 
			cin>>this->a;
			
			cout<<endl<<"=> Enter second name: "; cin>>this->name2;
			cout<<"=> Enter Dare 2: "; cin>>this->b;
		}
		
		void swap()
		{
			strcpy(c, b);
			strcpy(b, a);
			strcpy(a, c);
			
			cout<<endl<<"- Dare for "<<this->name1<<" is being "<<this->a<<endl;
			
			cout<<"- Dare for "<<this->name2<<" is being "<<this->b<<endl;
		}
};

int main()
{
	DareGame d1;
	
	d1.swap();
	
	return 0;
}
