/*

Design a GST Calculator in C++ to find total TAX on
various types of categorized items. Apply proper types of
Indian GST TAX varients based on different types of
Goods. GST have been divided into four GST rates – 5%,
12%, 18%, and 28% by the GST Council.

*/

#include<iostream>
#include<string.h>
using namespace std;

class GST_cal
{
	private:
		int price;
		int gst;
		int total_price;
	
	public :
	
		void setData()
		{
			cout <<"......... * GST Calculator * ........."<<endl;
			cout <<endl<<"=> Enter Price : ";
			cin  >>this->price;	
		}		
		
		void getData()
		{
			if(price<=500)
			{
				gst=(price*5)/100;
			}
			else if(price>=500 && price<=1000)
			{
				gst=(price*12)/100;
			}
			else if(price>=1000 && price<=2000)
			{
				gst=(price*18)/100;
			}
			else
			{
				gst=(price*28)/100;
			}
			
			total_price = price+gst;
			
			cout <<endl<<"=> Total GST price : "<<gst <<endl;
			cout <<endl<<"---------------------------------------"<<endl;
			cout <<"=> Total TAX : "<<total_price;
			cout <<endl<<"---------------------------------------"<<endl;
		}
};

int main()
{
	GST_cal g1;
	g1.setData();
	g1.getData();
	return 0;
}
