/*
	Kashyap has difficulty to remember multiplication
	tables. Write a C++ Program which generates
	multiplication tables between n1 and n2 provided values.
*/


#include<iostream>
using namespace std;

int main()
{
	int n1,n2,i,j,sum;
	
	cout << "Enter value of n1 : ";
	cin >> n1;
	cout << "Enter value of n2 : ";
	cin >> n2;
	
	cout << endl <<"Multiplication Table : "<< n1 <<" to "<< n2 << endl<<endl;
	for(i=n1;i<=n2;i++)
	{
		for(j=1;j<=10;j++)
		{
			sum = i*j;
			cout << i << " * " << j << " = " << sum << endl;
		}
		cout <<endl <<endl;
	}
	return 0;
}
