/*
	Hitler ordered a 10 soldiers pared to align in a row.
	He wants to know that which soldier have the highest
	killing score. Help him by design a C++ Program.
*/


#include<iostream>
using namespace std;

int main()
{
		int n,i,larg;
		
	//	cout << "~ Enter Size of Array : ";
	//	cin >> n;
	    cout << "~ Size of soliders paired : 10 "<<endl;
		cout <<endl<< "~ Elements of array : "<<endl<<endl;
		int a[10];
		
		for(i=0;i<10;i++)
		{
			cout << "a["<<i<<"]: ";
			cin >> a[i];
		}
		
		larg = a[0];
		cout <<endl<< "~ Highest killing score : ";
		for(i=1;i<10;i++)
		{
			if(larg<a[i])
			larg = a[i];
		}
		cout <<larg;
		return 0;
}
