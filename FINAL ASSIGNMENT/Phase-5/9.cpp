/*
	A Supreme Court wants a system which automatically
	figure out difference of two given time whether it is in
	seconds or any other format. Develop a solution in C++
	using UDF.
*/


#include<iostream>
using namespace std;

void List()
{
			cout<<"[1] Seconds	  "<<endl;
			cout<<"[2] Hours	  "<<endl;
			cout<<"[3] Minutes   "<<endl;
			cout<<"[4] Time 	  "<<endl;
			cout<<"[0] Exit	  "<<endl<<endl;
}

void Seconds()
{
	int s1, s2;
	
	cout<<endl<<"=> Enter First Seconds: ";
	cin>>s1;
	cout<<endl<<"=> Enter Last Seconds: ";
	cin>>s2;
	
	if(s1<s2)
	{
		cout<<endl<<"------------------------------------------------------"<<endl;
		cout<<"- Difference of two given time is: "<<s2-s1<<endl;
		cout<<"------------------------------------------------------"<<endl;
	}
	else if(s1>s2)
	{
		cout<<endl<<"------------------------------------------------------"<<endl;
		cout<<"- Difference of two given time is: "<<s1-s2<<endl;
		cout<<"------------------------------------------------------"<<endl;
	}
	
}

void Hours()
{
	int h1, h2;
	
	cout<<endl<<"=> Enter First Hours: ";
	cin>>h1;
	cout<<endl<<"=> Enter Last Hours: ";
	cin>>h2;
	
	if(h1<h2)
	{
		cout<<endl<<"------------------------------------------------------"<<endl;
		cout<<"- Difference of two given time is: "<<h2-h1<<endl;
		cout<<"------------------------------------------------------"<<endl;
	}
	else if(h1>h2)
	{
		cout<<endl<<"------------------------------------------------------"<<endl;
		cout<<"- Difference of two given time is: "<<h1-h2<<endl;
		cout<<"------------------------------------------------------"<<endl;
	}
	
}

void Minutes()
{
	int m1, m2;
	
	cout<<endl<<" Enter First Minutes: ";
	cin>>m1;
	cout<<endl<<" Enter Last Minutes: ";
	cin>>m2;
	
	if(m1<m2)
	{
		cout<<endl<<"------------------------------------------------------"<<endl;
		cout<<" Difference of two given time is: "<<m2-m1<<endl;
		cout<<"------------------------------------------------------"<<endl;
	}
	else if(m1>m2)
	{
		cout<<endl<<"------------------------------------------------------"<<endl;
		cout<<" Difference of two given time is: "<<m1-m2<<endl;
		cout<<"------------------------------------------------------"<<endl;
	}
	
}

void Time()
{
	int h1,m1,s1,h2,m2,s2,a,b,c,e,h3,m3,s3;
	
	cout<<endl<<"- Enter Hours: ";
	cin>>h1;
	cout<<"- Enter Minutes: ";
	cin>>m1;
	cout<<"- Enter Seconds: ";
	cin>>s1;
	
	cout<<endl<<"- Enter Hours: ";
	cin>>h2;
	cout<<"- Enter Minutes: ";
	cin>>m2;
	cout<<"- Enter Seconds: ";
	cin>>s2;
	
	if(h1>h2)
	{
		a=s1-s2;
		s3=a%60;
		b=a/60;
		c=m1-m2-b;
		m3=c%60;
		e=c/60;
		h3=h1-h2-e;
		
		cout<<"Substraction of above time is "
		<<h3<<" hours "
		<<m3<<" minutes "
		<<s3<<" seconds "<<endl;
	
	}
	else if(h1<h2)
	{
		cout<<"  Please, Enter First Time Greater Than Second Time..."<<endl;
	}
}

class time
{
	public:
		int c;
		
		void t()
		{
			do{
				List();
				
				cout<<"* Enter Your Choice: ";
				cin>>c;
				cout<<endl;
				
				if(c==1)
				{
					Seconds();	
				}
				else if(c==2)
				{
					Hours();	
				}
				else if(c==3)
				{
					Minutes();	
				}
				else if(c==4)
				{
					Time();	
				}
				else if(c!=0)
				{
					cout<<"	Enter Valid Value..."<<endl;
				}
				
			}while(c!=0);
		}
};

int main()
{
	time t1;
	
	t1.t();
	
	return 0;
}

