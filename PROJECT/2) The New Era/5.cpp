//5. WAP which illustrates the use of public and private access modifiers.

#include<iostream>
using namespace std;

class Restaurant
{
	private:
	int starter;
	int desserts;
	int soft_drinks;
};

class Cafe
{
    public:
	int hot_coffee;
	int black_coffee;
	int cold_bar;	
};

int main()
{
	Cafe c;
	
	cout << "Enter Quantity of Hot coffee : ";       cin >> c.hot_coffee;
	cout << "Enter Quantity of Black coffee : ";     cin >> c.black_coffee;
	cout << "Enter Quantity of cold bar : ";         cin >> c.cold_bar;
    
	cout <<endl<<"-----------------------------------------"<<endl;
	cout << "   -:     You Order     :- "<<endl<<endl<<"1) Hot coffee: "<<c.hot_coffee <<endl <<"2) Black coffee: "<<c.black_coffee <<endl <<"3) Cold bar: "<<c.cold_bar<<endl;
	return 0;	
}
