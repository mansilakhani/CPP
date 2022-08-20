//2.WAP to find leap years from 2000 to 3000.

#include<iostream>
using namespace std;

int main()
{
	int i;
	cout << "Enter leap year between 2000 to 3000:  "<<endl <<endl;
	
	for(i=2000;i<=3000;i++)
	{
		if(i%4==0)
		{
			cout << i << "\t";
		}
	}
	return 0;
}
