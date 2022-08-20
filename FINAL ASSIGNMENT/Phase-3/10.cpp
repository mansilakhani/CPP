/*

List of some historical words by some famous Philosopher has been written in his diary. But all that
words are only can be read if we put that word in front of mirror. So write a C++ program to design it.

*/

#include<iostream>
#include<string.h>
using namespace std;

class Historical
{
	private:
		char a[100];
		
	public:
		Historical()
		{
			cout<<"=> Enter historical words :- "; 
			cin>>this->a;
		}
		
		void Philosopher()
		{
			cout<<endl<<"- Front of mirror Word is :- "<<strrev(a)<<endl;
		}
};

int main()
{
	Historical h1;
	
	h1.Philosopher();
	
	return 0;
}
