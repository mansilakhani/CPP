/*	Two college collegues had argue with a ASCII value
	conversion method. Write a C++ Program which provides a
	solution for their issue.
*/

#include<iostream>
using namespace std;
int main()
{
	int n,i;
	char c;
	
	cout <<"~> Enter any value : ";          cin >> n;
	
	//ASCII value conversion method
	for(i=0;i<n;i++)
	{
		cout <<endl<<"~> Enter character : ";          cin >> c;
		cout<< "-  ASCII Value is  : "<<int(c)<<endl;
	}
	return 0;
}
