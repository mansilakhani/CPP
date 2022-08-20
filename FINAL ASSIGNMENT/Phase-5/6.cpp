/*
	A Reality show on TV organizes “Fastest-fingers Fast”
	round for entering in a Game. In this round participant
	has to find reverse of a given number as soon as possible
	to win this round. Design a C++ UDF for that.
*/


#include<iostream>
#include<string.h>
using namespace std;

void Reality_show()
{
	int n,rem,rev=0;
	
	cout << "-> Enter any number : ";
	cin  >>n;
	
	while (n!=0)
	{
		rem = n%10;
		rev = rev*10+rem;
		n   = n/10;
	}
	cout <<endl<<"-> Reverse of a given number : "<<rev<<endl;
}

class Round_win
{
	public :
		
		void G_Data()
		{
			Reality_show();
		}
};

int main()
{
	Round_win r1;
	r1.G_Data();
	return 0;
}
