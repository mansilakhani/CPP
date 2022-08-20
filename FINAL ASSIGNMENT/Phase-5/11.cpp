/*
	Declare a result of the survey that tells us which
	country have largest Army strength, US, China or India.
	Design a C++ UDF to announce the result of this survey to
	the public.
*/


#include<iostream>
using namespace std;

void Strength()
{
	int India , US , China ;
	
	India = 1399989;
	US    = 480893;
	China = 218500;
	
	if(India>US)
	{
		if(India>China)
		{
			cout <<endl<<"-> India have largest army strength."<<endl;
		}
		else
		{
			cout <<endl<<"-> China have largest army strength."<<endl;
		}
	}
	else
	{
		if(US>China)
		{
			cout <<endl<<"-> US have largest army strength."<<endl;
		}
		else
		{
			cout <<endl<<"-> China have largest army strength."<<endl;
		}
	}
}

class LA_strength               // Largest Army Strength
{
	public :
			
		    void LA_Data()
			{
				Strength();		
			}	
};
 
int main()
{
	LA_strength l1;
	l1.LA_Data();
	return 0;	 
}
