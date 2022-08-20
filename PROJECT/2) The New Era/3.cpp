//3. WAP to create class to read time in seconds and convert into time in (HH:MM:SS) format.

#include<iostream>
using namespace std;

class Time
{
	 public:
	 int hours;
	 int minutes;
	 int second;
};

int main()
{
	int s;
	Time t1;
	
	cout << "Enter time in seconds: ";
	cin >> t1.second;
	
	t1.hours=t1.second/3600;
	t1.second=t1.second%3600;
	t1.minutes=t1.second/60;
	s = t1.second % 60;
	
	cout <<endl<<"The time is : "<<t1.hours <<":" <<t1.minutes << ":" <<s ;
	return 0;
}
