/*
	Calculate total cost to apply a Solar Powered Panels
	for your Home Rooftop. Apply all types of government aid
	percentage to find reasonable cost.
*/


#include<iostream>
#include<string.h>
using namespace std;

class Solar 
{
	private:
		int cell;
		int power;
		int price;
		int del_chrg =1000;
		int ord_chrg =150;
		int f_c = 1500;
		int total;
	
	public:
		
		Solar()
		{
			cout <<endl<<"=> Enter Number of cell : ";
			cin  >> cell;
			cout <<"=> Enter power : ";
			cin  >> power;
		}
		
		void getData()
		{
			if(cell<=70)
			{
				price = 15000;	
			} 
			else if(cell<=150)
			{
				price=25000;
			}
			else
			{
				price=45000;
			}
			total=price+((price*20)/100)+del_chrg+ord_chrg+f_c;
			
			cout<<endl<<"- Total Cost : "   <<price  <<endl;
			cout<<"- Total GST : "     <<(price*20)/100<<endl;
			cout<<"- Total Delivery Charge : "<<del_chrg<<endl;
			cout<<"- Total Other Charge : "<<ord_chrg<<endl;
			cout<<"- Total Fitting Charge : "<<f_c<<endl<<endl;
			cout<<"....................................."<<endl;
			cout<<"- Total Cost : "<<total<<endl;
			cout<<"....................................."<<endl;
		}
};

int main()
{
	Solar s1;
	s1.getData();
	return 0;
}
