/*
	A Prime School wants an automate system for generating
	students grades.
	If marks in Maths>80, Phy>75 and Chem>72 then generate
	Grade A.
	If marks in 60<=Maths<=80, 55<=Phy<=75 and 50<=Chem<=72
	then generate Grade B.
	If marks in 40<=Maths<60, 35<=Phy<55 and 35<=Chem<50 then
	generate Grade C.
	Apply Grade D (Fail) if minimum criteria of marks doesn’t
	satisfy bt any student.
	Write a C++ Program for generating total N number of
	students grades for this Prime School.
*/


#include<iostream>
using namespace std;

int main()
{
	int m,p,c;
	
	cout <<endl<< "-> Enter Marks of Maths : ";        
	cin  >> m;
	cout << "-> Enter Marks of Physics : ";        
	cin  >> p;
	cout << "-> Enter Marks of Chemistry : ";        
	cin  >> c;
	
	
		        	  
	if(m>80 && p>70 && c>72)
	{
		cout <<endl<< "* Grade A";
	}
	
	else if((60<=m && m<=80 )|| (55<=p && p<=75) || (50<=c && c<=72))
	{
		cout << "* Grade B";
	}
	else if ((40<=m && m<60) || (35<=p && p<55) || (35<=c && c<50))
	{
		  cout <<endl<< "* Grade C";      	  	
	}
	else
	{
		cout <<endl<< "* Grade D(fail)";
	}
	return 0;	        	  
}



	
