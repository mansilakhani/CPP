/*
	Design a C++ UDF which producing cubes of all elements
	of provided array in form of another array. ¶hen, find
	average value of that new array. Based on that average
	value decide that array’s kind :
 	If 22<=average<=35, then an array is “TIGHTER".
 	If 35<average<=50, then an array is “BALANCED".
 	If average>50, then an array is “TOXIC".
 	If average<22, then an array is “LOOSER”.
*/


#include<iostream>
#include<string.h>
using namespace std;

void Array()
{
	int i,n,cube,avg=0,sum,k;
	
	cout <<endl<< "-> Enter Size of array : ";
	cin  >> n;
	cout <<endl<< "-> Elements of array : "<<endl<<endl;
	
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		cout << "- a["<<i<<"] : ";
		cin  >> a[i];
	}
	
	cout <<endl<<"-> Cubes of all elements : "<<endl<<endl;
	for(i=0;i<n;i++)
	{
		cube = a[i]*a[i]*a[i];
		avg  =  avg+cube;
		b[i] = cube;
	}
	k = avg/n;
	
	for(i=0;i<n;i++)
	{
		cout <<"- b["<<i<<"] : ";
		cout << b[i] <<endl;
	}
	cout <<endl<<"-> Average value of new array : "<<k <<endl<<endl;
	
	cout <<"-> Array kind : ";
	
	if(k>22 && k<=35)
	{
		cout << "Tighter";
	}
	else if(k>35 && k<=50)
	{
		cout << "Balanced";
	}
	else if(k>50)
	{
		cout <<"Toxic";
	}
	else
	{
		cout <<"Looser";
	}
}

class Sample
{
	public :
		void S_Data()
		{
			Array();
		}
};

int main()
{
	
	Sample s1;
	s1.S_Data();
	return 0;	
}
