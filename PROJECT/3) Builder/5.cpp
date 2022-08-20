/*	WAP to create a class which have both static data member and
	static member function. That class gives details of all states in India.
*/

#include<iostream>
#include<string.h>
using namespace std;

class Stateofindia
{
	private:
		static char india[100][100];

	public:
		static void getData()
		{
			int i,j;
			for(i=0;i<29;i++)
			{
			   	for(j=0; india[i][j]!='\0' ;j++)
			  	{
			      	cout << india[i][j];
				}
			    cout << endl;
			}
		}
};

char Stateofindia :: india[100][100] = 
{  
  "Andhra Pradesh",
  "Arunachal Pradesh",
  "Assam",
  "Bihar",
  "Chhattisgarh",
  "Goa",
  "Gujarat",
  "Haryana",
  "Himachal Pradesh",
  "Jammu and Kashmir",
  "Jharkhand",
  "Karnataka",
  "Kerala",
  "Madhya Pradesh",
  "Maharashtra",
  "Manipur",
  "Meghalaya",
  "Mizoram",
  "Nagaland",
  "Odisha",
  "Punjab",
  "Rajasthan",
  "Sikkim",
  "Tamil Nadu",
  "Telangana",
  "Tripura",
  "Uttar Pradesh",
  "Uttarakhand",
  "West Bengal" 
};
	
int main()
{
	Stateofindia :: getData();
	return 0;
}




