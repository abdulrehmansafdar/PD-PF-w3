#include <iostream>
using namespace std;
main ( ) {
	double MB;
	double bits;
	cout<<" Enter the size in megabytes (MB): ";
	cin>> MB;
	bits = 1024*1024*8*MB;
	cout<<MB<<" MB is equivalent to "<<bits<<"bits";
	}