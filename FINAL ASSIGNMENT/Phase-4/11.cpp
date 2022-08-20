/*
A one-sided open Tennis ball jar has capacity of storing total 5 different balls. 
Each ball has unique number attached as a label itself. Arrange all that ballsin a 
jar in such a way that their order is stats as a reverse by referring attached numbers 
as a label. Create a C++ system for doing such type of task.

*/

#include<iostream>
using namespace std;

class Jar
{
	private:
		int j[5]={110, 220, 330, 440, 550};
		int i;
		
	public:
		
		void solution()
		{
			cout<<endl<<"=> Every Ball with unique Number: "<<endl<<endl;
		
			for(i=0;i<5;i++)
			{
				cout<<"=> Ball Number is: "<<i <<" "<<" -> Ball is: "<<j[i]<<endl;;

			}
			
			cout<<endl<<"=> Ball order is stats as a reverse: "<<endl<<endl;
		
			for(i=4;i>=0;i--)
			{
				cout<<"=> Ball Number is: "<<i<<" "<<" -> Ball is: "<<j[i]<<endl;;

			}
		}
};

int main()
{
	Jar j1;
	
	j1.solution();
	
	return 0;
}


