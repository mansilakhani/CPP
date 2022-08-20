#include<iostream>
using namespace std;

class First 
{
	public :
		void add(int x , int y)
		{
			cout <<endl<< "- Sum in first : "<<x + y;
		}
};
class Second : public First 
{
	public :
		void add(int x , int y)
		{
			cout <<endl<< "- Sum in Second : "<<x + y;
			First :: add(x,y);
		}
};

int main()
{
	Second s1;
	int x ,y;
	cout << "-> Enter value of x : ";
	cin >> x;
	cout << "-> Enter value of y : ";
	cin >> y;
	s1.add(x,y);
	
	
}
