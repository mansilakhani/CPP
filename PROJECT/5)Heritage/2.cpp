/*	WAP with a mother class and an inherited daugther class.Both of them should have a method void display() that 
	prints a message (different for mother and daugther). In the main define a daughter and call the display() method on it.
*/

#include<iostream>
using namespace std;

class Mother
{
	public :
		void M_display()
		{
		//	cout << "~ Hello I am Mother!"<<endl;
			cout << "Mother : Display Function"<<endl;
		}
};

class Daughter :public Mother
{
	public:
		void D_dislay()
		{
		//	cout <<"~ Hello I am Daughter!"<<endl;
			cout << "Daughter : Display Function"<<endl;
		}
};

int main()
{
	Daughter d;
	
	d.D_dislay();
	d.M_display();
	return 0;
}
