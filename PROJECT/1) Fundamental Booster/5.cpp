//5. WAP to find square root of given numbers from array elements.

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int i,n;
	float a[n],b[n];
	
	cout << "Enter size of array: ";
	cin >> n;
	
	cout <<endl << "Array elements: "<<endl;
	
	for(i=0;i<n;i++)
	{
		cout << "a["<<i<<"]: ";
		cin >> a[i];
	}
	
	cout << endl<<"Square root of array element: ";
	for(i=0;i<n;i++)
	{
		b[i]=sqrt(a[i]);
		cout << endl <<b[i] ;
	}
}
