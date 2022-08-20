/* 	Meena face an isuue to perform a mathematical
	operation to find a cube of any number. Write a C++
	Program which helps Meena to solve her issue.
*/

#include<iostream>
using namespace std;

int main()
{
	int n,cube;
	cout <<"~> Enter any value: ";
	cin >> n;
	
	cube = n*n*n;
	
	cout <<endl<<"~> Meeena solved her issue : "<<cube ;
	return 0;
}
