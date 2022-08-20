/*
	Nishant trapped in a cyber game, in which he only gets some random amount of seconds for 
	determining at which exact time he has to leave that game. Wite a C++ program which converts 
	that seconds into HH:MM:SS format.
*/

#include<iostream>
using namespace std;

int main()
{
	int seconds , hr , min , sec ;
	
	cout << "~> Enter Total seconds : ";
	cin >> seconds;
	
	hr = seconds / 3600;
	min = (seconds/60)%60;
	sec = seconds % 60;
	
	cout << "~> Convert second : "<<hr <<":" <<min <<":" <<sec <<endl;
	return 0;
}


