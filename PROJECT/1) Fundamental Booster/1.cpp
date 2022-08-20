//1. WAP to check given string is numeric or not.

#include<iostream>
using namespace std;

int main()
{
	int i,j=0,k=0;
	char a[1000];
	
	cout << "Enter any string: ";
	cin >> a;
	
	for(i=0; a[i]!='\0';i++)
	{
		if(a[i]>='0' && a[i]<='9')
		{
			j++;
		}
		else
		{
			k++;
		}
    }
    if(j>0)
	{
		cout << "This string is numeric";
	}
	else
	{
		cout << "This string isnot numeric";
	}
    return 0;
}
