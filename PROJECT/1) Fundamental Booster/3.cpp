//3. WAP to convert given string into toggle case.

#include<iostream>
using namespace std;

int main()
{
	int i;
	char a[1000];
	
	cout << "Enter String: ";
	cin >> a;
	
	for(i=0;i<a[i];i++)
	{
		if(a[i]>=65 && a[i]<=95)
		{
			a[i]=a[i]+32;
		}
		else
		{
			a[i]=a[i]-32;
		}
	}
	
	cout << "Toggle case : "<<a;
	return 0;
}



