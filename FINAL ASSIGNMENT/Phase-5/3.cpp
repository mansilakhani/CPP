/*
	Kevin has two plain floors within different bowls
	containig one coin in each bowl. He bet his friend to
	transfer that coins in either bowls within 5 minutes.
	Help him by providing a C++ solution using UDF.
*/


#include<iostream>
#include<string.h>
using namespace std;

void Bowl()
{
	int i,n;
	
	cout <<endl<<"-> Enter Size of bowl : ";
	cin  >> n;
	cout <<endl<<".............................................";
	cout <<endl<<"->Elements of bowl : "<<endl;
	cout <<"............................................."<<endl<<endl;
	int a[n];
	for(i=0;i<n;i++)
	{
		cout << "- a["<<i<<"] : ";
		cin  >> a[i];
	}
	cout <<endl<<".............................................";
	cout <<endl<<"-> Transferring coin in another bowl :  "<<endl;
	cout <<"............................................."<<endl<<endl;
	int b[n];
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
		cout << "- b["<<i<<"] : "<<b[i] <<endl;
	}
}

class Kevin
{
	public :
		
		void K_Data()
		{
			Bowl();
		}
};

int main()
{
	Kevin k1;
	
	k1.K_Data();
	return 0;
}
