/*

Build a Counter App in C++ using OOP concept.
Initially the counter meant to be set as a value 0 using
constructor. By pressing UP Arrow from keyboard, counter
will be increment and by pressing DOWN Arrow, counter
will be decrement. You can use ASCII value concept by
achieving this type of functionality at the execution
time of a Program.

*/


#include<iostream>
#include<string.h>
using namespace std;

class Counter
{
	private:
		int n;
		
	public:
		
		void setData()
		{
			cout <<endl<<"=> Enter value of n : ";
			cin  >> this->n;
		}
		
		void List()
		{
			cout <<endl<<"(1) Press 1 for Increment "<<endl;
			cout <<"(2) Press 2 for Decrement "<<endl;
		}
		
		void Increment()
		{
			n=n+1;
			cout <<endl<<"-------------------------------"<<endl;
			cout <<"=> Increment value : "<<n <<endl;
			cout <<"-------------------------------"<<endl;
		}
		
		void Decrement()
		{
			n=n-1;
			cout <<"-------------------------------"<<endl;
			cout <<"=> Decrement value : "<<n <<endl;
			cout <<"-------------------------------"<<endl;
		}
		
};

int main()
{
	
	Counter c1;
	c1.setData();
		
	int choice;	
	cout <<"-------------------------------"<<endl;
	c1.List();
	
	cout <<endl<<" => Enter your choice : ";
	cin  >>choice;

	if(choice==1)
	{
		c1.Increment();
	}
	else if(choice==2)
	{
		c1.Decrement();
	}
	else
	{
		cout <<"-> Invalid choice..";
	}	
	return 0;
}

