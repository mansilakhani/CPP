/*
	An average consumer established his own business
	shop. He went to C.A for maintain all his accounts
	related queries. Now, help that C.A to build GST
	calculator for ease of calculation.
*/


#include<iostream>
using namespace std;

int main()
{
	int GST , GST_Amount;
	int price,cost;
	
	cout <<"--------- -: GST Calculator :- ---------"<<endl;
	cout << endl<<"~> Enter Net Price : ";
	cin >> price;
	cout << "~> Enter Original Price : ";
	cin >> cost;
	
	//GST.Amount = Netprice - Originalprice
	
	GST_Amount = price - cost;
	
	GST =(GST_Amount * 100)/cost;
	
	cout <<endl<< "~> GST amount  : "<<GST <<" % " <<endl;
	
	return 0;
}
