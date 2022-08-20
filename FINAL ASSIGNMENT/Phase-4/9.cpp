/*

Columbian army arranged all 9 forbidden refugees in a
3x3 matrix formation. An army cadets have to find that which 
one of the refugees stats the highest weight and which one weighs 
the lowest weight. Help army cadets by preparing C++ solution for 
their undercover mission.

*/

#include<iostream>
using namespace std;

class Columbian_army
{
	private:
		int a[3][3];
		int i,j;
		
	public:
		
		void setdata()
		{
			cout<<endl<<"=> Enter Refugees stats weight : "<<endl;
		
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cout<<" a["<<i<<"]["<<j<<"]: ";
					cin>>a[i][j];
				}
			}
		}
		
		void solution()
		{
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					if(a[i][j]>a[0][0])
					{
						a[0][0]=a[i][j];
					}
				}
			}
			cout<<endl<<"=> One of the refugees stats the highest weight is: "<<a[0][0]<<endl;
		
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					if(a[i][j]<a[0][0])
					{
						a[0][0]=a[i][j];
					}
				}
			}
			cout<<endl<<"=> One of the refugees stats the Lowest weight is: "<<a[0][0]<<endl;
		}
};

int main()
{
	Columbian_army c1;
	
	c1.setdata();
	
	c1.solution();
	
	return 0;
}


