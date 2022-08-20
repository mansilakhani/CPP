/*

One character is common in both Marvel & DC universe
named “Access”. Implement below mentioned structure using
proper inheritance concept and with assumable fields and
methods. You can create and use any type of methods and
illustrations to enhance this program as per your
preference.

*/


#include<iostream>
#include<string.h>
using namespace std;

class Universe
{
	public:
		 
		 void U_getData()
		 {
		 	cout <<endl<<"=> This is a universe :- "<<endl;
		 }
};

class Marvel : public Universe
{
	public:
		
		void M_getdata()
		{
			cout <<"- This is a Marvel class of a universe ."<<endl;
		}
};

class DC : public Universe
{
	public:
		
		void D_getdata()
		{
			cout <<"- This is a DC class of a universe ."<<endl;
		}
};

class MHeroes :public Marvel
{
	public:
		
		void MH_getData()
		{
			cout <<"- This is a MHeroes class of a Marvel ."<<endl;
		}
};

class DCHeroes :public DC
{
	public:
		
		void DC_getData()
		{
			cout <<"- This is a DCHeroes class of a DC ."<<endl;
		}
};

class Access : public MHeroes , public DCHeroes 
{
	public:
		
		void AC_getData()
		{
		
			Marvel::U_getData();
			M_getdata();
			D_getdata();
			cout <<endl<<"=> This is Access class :-"<<endl;
			MH_getData();
			DC_getData();			
		}
};


int main()
{
	Access a1;
	a1.AC_getData();
	return 0;
}



