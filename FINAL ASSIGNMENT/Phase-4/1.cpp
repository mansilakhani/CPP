/*
	A Train going to Busan have 2 containers which
	contains Zombies. Container A has 6 zombies, and
	Container B has 4 zombies. Passengers have to reach in
	engine container by passing through them. Help them by
	transferring zombies from both that containers to a new
	Container C. Build a C++ program for it.
*/

#include<iostream>
using namespace std;

int main()
{
	int i,j,n1,n2,n3,k;
	
	cout << "~ Enter Size for First Array  : ";
	cin >> n1;
	cout <<endl<< "~  Elements for First Array: "<<endl;
	
	int a[n1],b[n2],c[n3];
	for(i=0;i<n1;i++)
	{
		cout << "- a["<< i <<"] : ";
		cin >> a[i];
		c[i]=a[i];
	}
	k=i;
	cout <<endl<< "~ Enter Size for Second Array : ";
	cin >> n2;
	cout <<endl<< "~ Elements for  Second Array : "<<endl;
	for(i=0;i<n2;i++)
	{
		cout << "- b["<<i<<"] : ";
		cin >> b[i];
		c[k]=b[i];
		k++;
	}
	cout <<endl <<"~ The New Array (Merged Array) : ";
	for(i=0;i<k;i++)
	{
		cout << c[i] << " ";
	}
	cout <<endl;
	return 0;
}
