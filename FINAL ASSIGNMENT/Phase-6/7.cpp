/*

Build a C++ system which helps a Mathematician to
figure out the type of a Triangle. Bases on Pythagoras’
theorem, find out if a triangle is: obtuse, right or
acute.

*/


#include<iostream>
using namespace std;

class Square
{
	private:
		int a;
		int b;
		int c;
		int sum;
	public:
		void S()
		{
		cout <<endl<< "=> Enter value  of a :- "; cin >> this->a;
		cout << "=> Enter value  of b :- "; cin >> this->b;
		cout << "=> Enter value  of c :- "; cin >> this->c;
		
		c= c*c;
		sum = (a*a)+(b*b);
		
		if(c==sum)
		{
			cout <<endl<< "- Right....";
		}
		else if (c>sum)
		{
			cout <<endl<< "- Obtuse....";
		}
		else
		{
			cout <<endl<< "- Acute....";	
		}
	}
};
int main()
{
	Square s1;
	s1.S();
	return 0;
}
