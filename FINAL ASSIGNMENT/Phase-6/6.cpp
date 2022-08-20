/*

A 26 m long rope is stretched from the top of a 13 m
tree to the ground. Find the distance between the tree
and the end of the rope on the ground.

*/


#include<iostream>
#include<string.h>
using namespace std;

class Distance
{
	private:
		int a=26-13 ;
		int b=13; 
		int c;
		int d; 
		int temp=0;
		
	public:
		
		void getdata()
		{
			d=(a*a)+(b*b);
			
			c = d/ 2;
			while(c!=temp)
			{
			temp = c;
			c = (d/temp + temp)/2;
			}
			cout<<endl<<"=> The distance between the tree and the end of the rope on the ground is: "<<c<<endl;
		}
};

int main()
{
	Distance d1;
	
	d1.getdata();
		
	return 0;
}

