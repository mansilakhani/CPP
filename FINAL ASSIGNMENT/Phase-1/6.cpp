/*	An IT company wants to generate random number of 6
	digits long and send it to its employees. Write a C++
	Program to help this IT company.
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
	unsigned int mansi = (unsigned int)time(NULL);
	srand(mansi);
	cout << endl << "~> IT company generate random number for employees : "
		 << (rand()%100000+1000000);
	return 0;
}
