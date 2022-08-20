//	WAP to demonstrate example of hierarchical inheritance to get square and cube of a number.


#include<iostream>
using namespace std;

class Number
{
	public:
		int n;
	public:
		void getNumberData()
		{
			cout << "~> Enter any number : ";
			cin >> n;
		}	
};

class Square : public Number
{
	public:
		int sqr;
		
	public:
		void getSquareData()
		{
		    sqr = n*n;
		   cout <<endl<<"-  Square of "<<n << " is : "<<sqr <<endl;
		}
};

class Cube : public Number
{
	public:
		int cube;
		
	public:	
		void getCubeData()
		{
			cube = n*n*n;
			cout <<endl<<"-  Cube of "<<n << " is : "<<cube <<endl;
		}	
};

int main()
{
	Square s1;
	Cube c1;
	
	cout <<"------- -: Find Square of a number :- -------"<<endl<<endl;
	s1.getNumberData();
	s1.getSquareData();
	
	cout <<endl<<endl<<"-------- -: Find Cube of a number :- --------"<<endl<<endl;
	c1.getNumberData();
	c1.getCubeData();
	return 0;
}

