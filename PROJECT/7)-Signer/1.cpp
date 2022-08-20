// WAP to add two objects using binary plus(+) operator overloading .


#include<iostream>
#include<string.h>
using namespace std;

class Number                   // n1 = 5 ,n2,=6 ,n3=11
{
	private:
		int x;
		
	public:
		//void setData(int x)
		void setData()
		{   
			cout <<"-> Enter any value :  ";        
			cin >> this->x;
		//	this -> x = x;
		}
		
		void getData()
		{
			cout <<endl<<"-> Sum : "<<this->x ;
		}
		
		Number operator+(Number c)
		{
			Number t;
			t.x = this-> x + c.x;
			return t;
		}
};

int main()
{
	Number n1,n2,n3;
	
	
	n1.setData();
	n2.setData();
	
	n3 = n1+n2;        //  n3=n1.operator+(n2)
	n3.getData();  
	return 0;
}
