/*

A 15 m fire-fighter’s ladder is leaning against the
wall. If the ground distance between the foot of the
ladder and the wall is 7 m, what is the wall’s height?

*/

#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

class Distance
{
	private:
		int a = 15;
		int b = 7;
		int c;
		double k;
		
	public:
	
		void getData()
		{
			c=(a*a)+(b*b);
			k=sqrt(c);
			cout <<endl<<"- Height of wall : "<<k;	
		}	
};

int main()
{
	Distance d1;
	d1.getData();
	return 0;
}
