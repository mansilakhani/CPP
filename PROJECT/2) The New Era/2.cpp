// 2. WAP to create a class to read and add two times.


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
	Time t1,t2,t3;
	
	//cout << "Enter time1 : "<<endl;
	cout << "********* Time-1 *********"<<endl<<endl;
	cout << "Enter hours: ";
	cin >> t1.hours;
	cout << "Enter minutes: ";
	cin >> t1.minutes;
	cout << "Enter second: ";
	cin >> t1.second;
	
	//cout << "Enter time2: "<<endl;
	cout <<endl<< "********* Time-2 *********"<<endl<<endl;
	cout << "Enter hours: ";
	cin >> t2.hours;
	cout << "Enter minutes: ";
	cin >> t2.minutes;
	cout << "Enter second: ";
	cin >> t2.second;
	
	t3.second= t1.second + t2.second ;
	t3.minutes= t1.minutes + t2.minutes + (t3.second/60);
	t3.hours = t1.hours + t2.hours + (t3.minutes/60);
	t3.minutes=t3.minutes%60;
	t3.second=t3.second%60;
	
	cout <<endl<< "***************************"<<endl;
//	cout << "Totat time:   "<<t3.hours <<"hour" <<t3.minutes <<"minutes" <<t3.second <<"second";
	cout << endl<<"Total time:   "<<t3.hours <<":" <<t3.minutes <<":" <<t3.second ;
	return 0;
}
