/* 
	A Math problem to find average of all even numbers
	from n Natural numbers raise difficulty to all 5th
	standard students. Write a C++ Program to help them.
*/


#include<iostream>
using namespace std;

int main()
{
	int n,i;
	int avg=0,sum,c=0;
	
	cout << "~> Enter any number : ";
	cin >> n;
	
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			avg = avg + i;
			c++;
		}
	}
	sum = avg/c;
	cout <<endl<< "~> Average of all even number : "<<sum;
}
