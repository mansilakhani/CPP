/*

Design a swapping program using only constructors for
helping Devansh to gain passing marks in examination.

*/

#include<iostream>
#include<string.h>
using namespace std;

class Swap_Mark
{
	public:
		int a;
		int b;
		
	public:
		
		Swap_Mark()
		{
			cout <<"--------------------------------------"<<endl;
			cout <<"=> After Swapping Passing Mark :- "<<endl;
			cout <<"--------------------------------------"<<endl;
			cout <<endl<<"  * Enter Original Mark :  ";
			cin  >> a;
			cout <<endl<<"  * Enter Passing Mark : ";
			cin  >> b;
		//	 "<<endl <<" a : "<<a <<endl <<" b :"<<b <<endl;
			
			a = a+b;
			b = a-b;
			a = a-b;
		    
			cout <<endl<<"--------------------------------------"<<endl;
			cout <<"=> Before Swapping Passing Mark :- "<<endl;
		    cout <<"--------------------------------------"<<endl;
			cout <<endl<<"  * Original Mark : "<<a;
		    cout <<endl<<endl<<"  * Passing Mark  : "<<b;
		}
};

int main()
{
	Swap_Mark();
	
	return 0;
}
