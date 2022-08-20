//6. WAP to generate cube of given 5 numbers and make an array of that generated cubes.

#include<iostream>
using namespace std;

int main()
{
	int i,a[5],b[5];
	cout << "Enter size of array: "<<endl;
	
	for(i=0;i<5;i++)
	{
		cout<< "a["<< i <<"]: ";
		cin >> a[i];
	}
	
	cout << endl <<"Cube of array: "<<endl;
	for(i=0;i<5;i++)
	{
		b[i]=a[i]*a[i]*a[i];
		cout << "a["<< i <<"]:  "<<b[i] <<endl; 
	//	 cout << b[i]<<endl;
	}
	
	
	
}
