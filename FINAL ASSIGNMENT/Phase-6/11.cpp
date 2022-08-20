/*

Build an Indian Regional Festival system in C++. User
can enter any date of current running year, and bases on
that date display which festival will be coming on that
date.

*/

#include<iostream>
#include<string.h>
using namespace std;

class Festival
{
	private :
		int date;
		int month;
		
	public :
	
	     void setData()
		 {
		 	cout <<endl<<"=> Enter Month : ";
		 	cin  >>this->month;
			cout <<"=> Enter Date : ";
			cin  >> this->date;	
		 }	
		 
		 void getData()
		 {
		 	cout <<endl<<"=> "<<date<<"/"<<month<<"/"<<"2022"<<endl;
		 	
		 	if(date==14 && month==1)
			{
				cout <<endl<<"- Makar Sanskranti";	
			} 
			else if(date==17 && month==1)
			{
				cout <<endl<<"- Pongal";	
			}	 
			else if(date==16 && month==2)
			{
				cout <<endl<<"- Basant panchami";
			}
			else if(date==1 && month==3)
			{
				cout <<endl<<"- Mahashivratri";
			}
			else if(date==17 && month==3)
			{
				cout <<endl<<"- Holika Dahan";
			}
			else if(date==18 && month==3)
			{
				cout <<endl<<"- Holi";
			}
			else if(date==16 && month==4)
			{
				cout <<endl<<"- Hanuman Jayanti";
			}
			else if(date==3 && month==5)
			{
				cout <<endl<<"- Akshaya Tritiya";
			}
			else if(date==2 && month==8)
			{
				cout <<endl<<"- Naga Panchami";
			}
			else if(date==31 && month==9)
			{
				cout <<endl<<"- Ganesh Chaturthi";
			}
			else if(date==3 && month==10)
			{
				cout <<endl<<"- Navratri";
			}
			else if(date==10 && month==10)
			{
				cout <<endl<<"- Dusshera";
			}
			else if(date==23 && month==10)
			{
				cout <<endl<<"- Dhanteras";
			}
			else if(date==24 && month==10)
			{
				cout <<endl<<"- Diwali";
			}
			else if(date==26 && month==10)
			{
				cout <<endl<<"- Bhai Dooj";
			}
			else
			{
				cout <<endl<<"- Invalid Choice....";
			}
			
		 }
};

int main()
{
	Festival f1;
	f1.setData();
	f1.getData();
	return 0;
}
