/*	
	Develop a simple comparision system which identify if
	given number is Palindrome or not. By this system, a bank
	employee will appriciate your help. Write a C++ program
	for developing this system.
*/


#include<iostream>
using namespace std;

int main()
{
	int temp,num,digits,rev=0;
	
	cout << "~ Enter any number: ";
	cin >> num;
	
	temp = num;
	
	while (num!=0)
	{
		digits = num % 10;
		rev = (rev * 10)+digits;
		num = num/10;
	}
	cout <<endl<<"~ Reverse number: "<<rev <<endl;
	
	if (temp == rev)
	{
		cout << endl<<"-> This is a palindrome number.";
	}
	else
	{
		cout <<endl<< "-> This is not a palindrome number.";
	}
	return 0;
}
