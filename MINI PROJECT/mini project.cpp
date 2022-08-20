#include<iostream>
#include<string.h>
using namespace std;

class Library_Information
{
	
	private:
		char b_name[100];
		char aut_name[100];
		int pub_date;
		int b_id;
		int b_price;
		int b_qut;
		int b_no;
		int b_pg;
	
	public:
		void case1_data()
		{
			cout <<endl;
			cout <<endl<<"\t\t\t\t\t================= Add Book Information =================="<<endl<<endl;
			cout <<"\t\t\t\t\t.  Enter Book Name : ";                     cin >> this->b_name;
			cout <<"\t\t\t\t\t.  Enter Author Name : ";                   cin >> this->aut_name;
			cout <<"\t\t\t\t\t.  Enter Publication Date : ";              cin >> this->pub_date;
			cout <<"\t\t\t\t\t.  Enter Book's ID : ";                     cin >> this->b_id;
			cout <<"\t\t\t\t\t.  Enter Book's price : ";                  cin >> this->b_price;
			cout <<"\t\t\t\t\t.  Enter Book's Quantity : ";               cin >> this->b_qut;
			cout <<"\t\t\t\t\t=========================================================="<<endl<<endl;
		}
		void case2_data()
		{
			cout <<endl<<endl;
			cout <<endl<<"\t\t\t\t\t=============== Display Book Information ================"<<endl<<endl;
			cout <<"\t\t\t\t\t.  Enter Book No : ";            cin >>this->b_no;
			cout <<"\t\t\t\t\t.  Enter Book Name : ";          cin >>this->b_name;
			cout <<"\t\t\t\t\t.  Enter Author Name : ";        cin >>this->aut_name;
			cout <<"\t\t\t\t\t.  Enter No.of pages : ";        cin >>this->b_pg;
			cout <<"\t\t\t\t\t=========================================================="<<endl<<endl;
		}
		
		void case3_data()
		{
			cout <<endl<<"\t\t\t\t\t========= List the count of books in the library  ========="<<endl;
		}
		
		char case4_data()
		{
			return this->b_name[100];
		}
		
		int case5_data()
		{
			return this->b_id;
		}
};

int main()
{

	Library_Information i[100];
	int count=0;
	int choice ,j,n;
	cout <<endl<<"\t\t\t\t\t* How Many Record You Want To Add :-  ";            cin >> n;
	do
	{
	cout <<"\t\t\t\t\t==========================================================";
	cout <<endl<<"\t\t\t\t\t============== Library Management System =================";
	cout <<endl<<"\t\t\t\t\t=========================================================="<<endl;
	
	cout <<endl;
	cout <<"\t\t\t\t\t. Press 1 for Add Book Information ... "<<endl;           
	cout <<"\t\t\t\t\t. Press 2 for Display Book Information ... "<<endl;       
	cout <<"\t\t\t\t\t. Press 3 for List the count of books in the library ... "<<endl;
	cout <<"\t\t\t\t\t. Press 4 for List the title of specified book ... "<<endl;
	cout <<"\t\t\t\t\t. Press 5 for List the books for books id's ... "<<endl;
	cout <<"\t\t\t\t\t. Press 0 for Exit :- "<<endl;
	

	cout <<endl;
	cout <<"\t\t\t\t\t* Enter your choice : ";
	cin  >> choice;

	switch(choice)
	{
		case 1 : 
				for(j=0;j<n;j++)
				{
					i[j].case1_data();	
				}
				break;
		case 2 : 
			   for(j=0;j<n;j++)
				{
					i[j].case2_data();	
				}
				break;
		case 3 :
			i[j].case3_data();
				
			for(j=0;j<n;j++)
			{
				count++;	
			}
			cout <<endl<<"\t\t\t\t\t Total number of book : "<<count <<endl<<endl;
			    break;
		case 4 :
			cout <<endl<<"\t\t\t\t\t================== List of books title ==================="<<endl;
			cout <<endl<<"\t\t\t\t\t=> Books title :- "; 
				for(j=0;j<n;j++)
				{
					cout << i[j].case4_data()<<"  ";
				}
				cout << endl<<endl;
			    break;	
		case 5 : 
			cout <<endl<<"\t\t\t\t\t============== List of books for book's ID ==============="<<endl;
			cout <<endl<<"\t\t\t\t\t=> Books ID :- "; 
				for(j=0;j<n;j++)
				{
					cout << i[j].case5_data() << "  ";
				}
				cout << endl<<endl;
			    break;			
		case 0 : 
			    break;
		default :
				cout <<"Invalid Entry.....";										    
		}
	}while(choice!=0);
	return 0;
}
