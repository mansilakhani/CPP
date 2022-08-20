//4. WAP to check if a given character is vowels or consonant.

#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout << "Enter any character: ";
	cin >> ch;
	
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'||ch=='A' ||ch=='E'|| ch=='I' ||ch=='O'||ch=='U')
	{
		cout<< endl<<"Vowel";
	}
	else
	{ 
		cout<< endl<<"Consonant";
	}
	return 0;
}




