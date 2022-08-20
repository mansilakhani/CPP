/*	By writing a logic for checking if a given string is
	Palindrome or Not, Apexa will be qualified for an entrance
	exam. Write a C++ Program for Apexa to qualify.
*/

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	 char s[1000];
	 int i,n,c=0;
	 cout << "~ Enter String : ";
	 cin >> s;
	 
	 n=strlen(s);
	 
	 for(i=0;i<n/2;i++)
	 {
	 	if(s[i]==s[n-i-1])
	 	{
	 		c++;
		}
	 }
	 if(c==i)
	 {
	 	cout<<endl<<"~ This string is palindrome";
	 }
	 else
	 {
	 	cout <<endl<<"~ This string is not palindrome";
	 }
	 return 0;
}
