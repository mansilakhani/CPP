//4. WAP to create a class which Read and Print House details along with Room details.


#include<iostream>
using namespace std;

class House
{
	public:
	char house_name[1000]; 
	int house_number;
	char house_address[1000];
};

int main()
{
	House h1;
	
	cout<< "Enter house name: ";
	cin >> h1.house_name;
	cout<< "Enter house number: ";
	cin >> h1.house_number;
	cout<< "Enter house address: ";
	cin >> h1.house_address;
	
	cout<< "House name: "<<h1.house_name <<"House number: "<<h1.house_number <<"House address: "<<h1.house_address;
	return 0;
}

class Room
{
    public: 
	int l;
    int b;
    int h;
};


int main()
{
	 Room r1;
	 
	 cout << "Enter length ,breadth ,height: ";
	 cin >>r1.l >>r1.b >>r1.h;
	 
	 cout << "Length: "<<r1.l  <<",Breadth: "<<r1.b <<", Height: "<<r1.h;
	 return 0;
}
