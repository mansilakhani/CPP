#include<iostream>
/*

A new OLED Smart TV as a gift from a bussiness with
emersive 32*52 inch size is arrived at occation of Dashera in 
the house of Mayer. Now Mayer has to decide that how much 
of minimum wll area (width * hight) will be required to fit that 
new TV so that evevn after applying that TV, 10 inch of margin 
still available around TV. Help Mayer to indentify the solution by
using c++.

*/

#include<iostream>
#include<string.h>
using namespace std;

class TV
{
	private:
		int w=32, h=52;
		
	public:
		
		void Cover()
		{
			cout<<"=> Smart TV is 32*52 inch."<<endl;
			cout<<endl<<"- Wall Height*Width is = "<<w+20<<" * "<<h+20<<endl;
			cout<<endl<<"=> Total area that covered TV is = "<<(w+20)*(h+20)<<endl;
		}
};

int main()
{
	TV t1;
	
	t1.Cover();
	
	return 0;
}

