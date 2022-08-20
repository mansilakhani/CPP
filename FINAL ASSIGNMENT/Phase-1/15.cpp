/*
	Aaryan is constantly trying to Check Whether a
	character is Vowel or Consonant. But for some unknown
	reason he just cannot remember difference between vowel
	and consonant. Write a C++ Program to provide a better
	solution to Aaryan.
*/


#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout << "~ Enter any character : ";
	cin >> ch;
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		cout <<endl<< "~> This is a vowels";
	}
	else
	{
		cout <<endl<< "~> This is a constant";
	}
	return 0;
}
