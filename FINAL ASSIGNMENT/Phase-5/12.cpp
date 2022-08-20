/*
	Two buses(Bus B1 & Bus B2) head forwards from Mumbai
	to Kolkata. Both of them have to cover total distance of
	1933 KM. Bus B1 reached on destination with total time of
	40 Hr & Bus B2 takes total time of 46 Hr. Find out
	velocity of both buses using a C++ UDF.
*/


#include<iostream>
using namespace std;

void Bus()
{
	int t_dis = 1933 , t_b1 = 40 ,  t_b2 =46 ;                         // t_dis => total distance
	int  V1 , V2;
	
	V1 = t_dis / t_b1 ;
	V2 = t_dis / t_b2 ;
	
	cout <<endl <<"=> Enter Velocity of Both Bus :- "<<endl;
	cout <<endl<< " -  Velocity of Bus (b1) : "<<V1 <<endl;
	cout <<endl<< " -  Velocity of Bus (b2) : "<<V2<<endl;
}

class V_Bus
{
	public :
	
			void B_Data()
			{
				Bus();	
			}	
};

int main()
{
	V_Bus v1;
	v1.B_Data();	
	return 0;
}
