/*
	Ronak gives an examination in which he gains internal
	viva marks in all subjects like this: 23, 19, 22, 28 & 23
	(all marks are out of 30). And gains final written
	examination marks like this: 65, 58, 49, 52 & 64 (all
	marks are out of 70). Evaluate final total examination
	marks by adding both exam marks and reveal marks out of
	100 in each subject by using C++. Also, final total
	average value for that.
*/


#include<iostream>
#include<string.h>
using namespace std;

class Ronak
{
	private:
		int Ronak1[5] = {23, 19, 22, 28, 23};
		int Ronak2[5] = {65, 58, 49, 52, 64};
		int sum=0, i;
		
	public:
		
		void Mark()
		{
			cout<<endl<<"=> Ronak viva marks :- 23, 19, 22, 28, 23"<<endl;
			cout<<"=> Ronak examination marks :- 65, 58, 49, 52, 64 "<<endl;
			cout<<endl<<"=> Final Examination Mark of :- ";
			for(i=0;i<5;i++)
			{
				cout<<" , "<<Ronak1[i]+Ronak2[i];
				
				sum = sum +(Ronak1[i]+Ronak2[i]);
			}
			cout<<endl;
			cout<<endl<<"=> Average of all marks :- "<<sum/5<<endl;
		}
};

int main()
{
	Ronak r1;
	
	r1.Mark();
	
	return 0;
}

