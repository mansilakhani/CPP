/*

Build a C++ program which detects if a given word
contains any vowels or not. And if it contains, then
count how many total vowels are present and which they
are. Also returns average value of total vowels’ ASCII
values’. Based on that average value, decide word’s
level!
 If 10<=average<=1 , then a word is “SMOO"HER
 If 1 <average<=30, then a word is “SOBER
 If average>=30, then a word is “HARER
 If average==0, then a word is “GORGEOUS”
 
*/


#include<iostream>
#include<stdio.h>
using namespace std;

class Word
{
	private:
		char a[100];
		int c=0, sum=0, i, avg;
		
	public:
		
		Word()
		{
			cout<<"=> Enter any string :- "; cin >> this->a;
		}
		
		void answer()
		{
			for(i=0;a[i]!='\0';i++)
			{
				if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||
				   a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
				{
				   	c++;
				   	sum += int(a[i]);
				}
				
			}
			
			avg = sum/c;
			
			cout<<endl<<"- Total vowels are present in message is :- "<<c<<endl;
			cout<<"- Average of total vowels ASCII values is :- "<<avg<<endl;
			cout<<endl<<"- Word Level is :- ";
			if(avg==0)
			{
				cout<<"Gorgeous"<<endl;
			}
			else if(avg>=30)
			{
				cout<<"Harer"<<endl;
			}
			else if(1 <avg && avg<=30)
			{
				cout<<"Sober"<<endl;
			}
			else if(10<=avg && avg>=1)
			{
				cout<<"Smooher"<<endl;
			}
		}
};

int main()
{
	Word w1;
	
	w1.answer();
	
	return 0;
}
