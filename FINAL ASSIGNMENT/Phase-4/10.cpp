/*

Help Martin to solve a special kind of puzzle by designing a
C++ system. Total 25 random numbers arranged in a form of Squ-
are Matrix. To solve that puzzle, he has to find addition of all diago-
nally aligned numbers on puzzle cardboard.

*/

#include<iostream>
using namespace std;

class Martin
{
	private:
		int a[5][5];
		int i,j,sum=0;
		
	public:
		
		Martin()
		{
			cout<<endl<<"=> Enter 25 Random Number:-"<<endl;
		
			for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					cout<<"- a["<<i<<"]["<<j<<"]: ";
					cin>>a[i][j];
				}
			}
		}
		
		void solution()
		{
			cout<<endl<<"=> Matrix is:-"<<endl;
		
			for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					cout<<a[i][j]<<" ";
				}
				cout<<endl;
			}
			for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(i==j)
					{
						sum+=a[i][j];
					}
				}
			}
			cout<<endl<<"=> Addition of Digonal Elements is: "<<sum<<endl;
		}
};

int main()
{
	Martin m1;
	
	m1.solution();
	
	return 0;
}

