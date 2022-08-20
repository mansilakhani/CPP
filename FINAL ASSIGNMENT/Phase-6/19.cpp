/*
	Help a builder to build a house as same as structurized as below:                ///// Hierarchical Method /////

								  House

					    Kitchen    Bedroom    Backyard

					 Dining Table  Bathroom   Garage
	
	Assume suitable data and member methods. You can add your own functionalities to enhance this solution.
*/


#include<iostream>
#include<string.h>
using namespace std;

class House
{
	public:
		void HouseData()
		{
			cout <<" Welcome "<<endl;
			cout <<" This is my house."<<endl;
		}
};

class Kitchen : public House
{ 
	public:
		void KitchenData()
		{
			HouseData();
			cout <<" There is a big kitchen in my house.";
		}
};

class Bedroom  : public House
{
	public:
		
		void BedroomData()
		{
			cout <<" There are four bedroom in my house."<<endl;
		}	
};

class Backyard : public House
{
	public:
		
		void BackyardData()
		{
			cout <<" This is backyard area in my house."<<endl;
		}
};

class Dinning_table : public Kitchen
{
	public :
		
		void Dinning_tableData()
		{
			KitchenData();
			cout <<endl<<" This is a Dinning table."<<endl;
		
		}
};

class Bathroom : public Bedroom
{
	public:
		
		void BathroomData()
		{
			
			cout <<" This is a bathroom."<<endl;
			BedroomData();
		}
};

class Garage : public Backyard
{
	public :
			
		  void GarageData()
		  {
		     BackyardData();
			 cout <<" This is a garage."<<endl;	
		  }		
};

int main()
{
	Dinning_table d1;
	Bathroom b1;
	Garage g1;
	
	d1.Dinning_tableData();
	b1.BedroomData();
	g1.GarageData();
	
	return 0;
}
