/*

Nayan bet ?.1200 to his friend Kartik if he find
frequency of each characters in given String. Whereas
Dhruv bet ?.1500 to his friend Piyush if he finds it
first. Provide a C++ program to help this fellows so that
they can play this interesting game.

*/

#include<iostream>
#include<string.h>
using namespace std;

class String
{
	private:
		char a[100];
		int b[100];
		int i,j,k;
		
	public:
		
		String()
		{
			cout<<"=> Enter any string : "; cin>>this->a;
		}
		
		void Frequency()
		{
			for(i=0;a[i]!=NULL;i++)
			{
				k=1;
				for(j=i+1;a[j]!=NULL;j++)
				{
					if(a[i]!='-1')
					{
						if(a[i]==a[j])
						{
							k++;
							a[j]='-1';
						}
					}
					b[i]=k;
				}
			}
			cout << endl;
			for(i=0;a[i]!=NULL;i++)
			{
				if(a[i]!='1')
				{
					cout<<"- Frequency of "<<this->a[i]<<" is "<<this->b[i]<<endl;
				}
			}
		}
}; 

int main()
{
	String s1;
	
	s1.Frequency();
	
	return 0;
}
