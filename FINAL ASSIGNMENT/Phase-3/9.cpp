/*

Create an Instagram filter by which we can easily
extract all digits and special symbols fron any username.
By doing so, we can retrieve a pure username with only
alphabets within it. Use C++ as a prime language to do
so.

*/

#include<iostream>
#include<stdio.h>
using namespace std;

class Instagram
{
	private:
		char a[100], b[100];
		int i, j=0;
		
	public:
		
		Instagram()
		{
			cout<<"* Enter your username :- "; cin>>this->a;
		}
		
		void UserName()
		{
			for(i=0;a[i]!='\0';i++)
			{
				if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
				{
					b[j]=a[i];
					j++;
				}
			}
			cout<<endl<<"=> Your name is :- "<<this->b<<endl;
		}
};

int main()
{
	Instagram i1;
	
	i1.UserName();
	
	return 0;
}
