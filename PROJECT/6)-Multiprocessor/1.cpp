/* 
	WAP to create a Message class with a constructor that takes a
	single string with a default value. Create a private member string, and in the constructor simply assign the argument string to you internal
	string. Create two overloaded member functions called print( ): one that takes no arguments and simply prints the message stored in the object, and one that takes a string argument, which it prints in addition to
	the internal message.
*/

#include<iostream>
#include<string.h>
using namespace std;

class Message
{
	private:
	char n[100];
	
	public:
	Message(char str[])
	{
		strcpy(this->n,str);
	}
	void print()
	{
		cout << this->n << endl;
	}
	void print(char ch[])
	{
		cout << ch << endl;
	}
};

int main()
{
	Message m1("-> This is a normal message.");
	m1.print();
	m1.print("-> This is a warning.");
	
	return 0;
}
