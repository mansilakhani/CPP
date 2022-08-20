/*

Develop a C++ solution by which a user can add/
subtract/multiply/divide two Complex numbers with help of
Operator Overloading concept. In context of math, a
complex number contains two parts: a real part and an
imagenary part.

*/


#include<iostream>
#include<string.h>
using namespace std;

//complex : 5 + 3j
//complex : 4 + 2j    => 9 + 5j

class Complex
{
	public:
		int x;
		int y;
		
	public:
	
		void setData(int a ,int b)
		{
			this->x=a;
			this->y=b;
		} 
		
		void getData()
		{
			cout <<"("<<this->x <<"+" <<this->y <<"j)"<<endl;
		}
		
		Complex operator+(Complex n)
		{
			Complex temp;
			temp.x = this->x+n.x;
			temp.y = this->y+n.y;
			return temp;
		}		
		Complex operator-(Complex n)
		{
			Complex temp;
			temp.x = this->x-n.x;
			temp.y = this->y-n.y;
			return temp;
		}		
		Complex operator*(Complex n)
		{
			Complex temp;
			temp.x = this->x*n.x;
			temp.y = this->y*n.y;
			return temp;
		}	
		Complex operator/(Complex n)
		{
			Complex temp;
			temp.x = this->x/n.x;
			temp.y = this->y/n.y;
			return temp;
		}
		
		void List()
		{
			cout <<endl<<"(1)Addition : "<<endl;
			cout <<"(2)Subtraction : "<<endl;
			cout <<"(3)Multiplication : "<<endl;
			cout <<"(4)Division : "<<endl;
			cout <<"(0)Exit : "<<endl;	
		}			
};

int main()
{
	int r1,i1,r2,i2,choice;
	
	Complex c1,c2,c3;
	c1.List();
	
	cout <<endl<<"=> Enter any choice : ";
	cin  >>choice;
	
	if(choice==1)
	{
		cout <<"- Enter Real part : ";
		cin  >> r1;
		cout <<"- Enter imagenary part : ";
		cin  >> i1;
		cout <<"- Enter Real part : ";
		cin  >> r2;
		cout <<"- Enter imagenary part : ";
		cin  >> i2;
		
		c1.setData(r1,i1);
		c2.setData(r2,i2);
		
		c1.getData();
		c2.getData();
		
		c3=c1+c2;
		c3.getData();
	}
	else if(choice==2)
	{
		cout <<"- Enter Real part : ";
		cin  >> r1;
		cout <<"- Enter imagenary part : ";
		cin  >> i1;
		cout <<"- Enter Real part : ";
		cin  >> r2;
		cout <<"- Enter imagenary part : ";
		cin  >> i2;
		
		c1.setData(r1,i1);
		c2.setData(r2,i2);
		
		c1.getData();
		c2.getData();
		
		c3=c1-c2;
		c3.getData();
	}
	else if(choice==3)
	{
		cout <<"- Enter Real part : ";
		cin  >> r1;
		cout <<"- Enter imagenary part : ";
		cin  >> i1;
		cout <<"- Enter Real part : ";
		cin  >> r2;
		cout <<"- Enter imagenary part : ";
		cin  >> i2;
		
		c1.setData(r1,i1);
		c2.setData(r2,i2);
		
		c1.getData();
		c2.getData();
		
		c3=c1*c2;
		c3.getData();
	}
	else
	{
		cout <<"- Enter Real part : ";
		cin  >> r1;
		cout <<"- Enter imagenary part : ";
		cin  >> i1;
		cout <<"- Enter Real part : ";
		cin  >> r2;
		cout <<"- Enter imagenary part : ";
		cin  >> i2;
		
		c1.setData(r1,i1);
		c2.setData(r2,i2);
		
		c1.getData();
		c2.getData();
		
		c3=c1/c2;
		c3.getData();
	}
	return 0;
}
