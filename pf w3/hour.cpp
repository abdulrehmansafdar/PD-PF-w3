#include<iostream>
using namespace std;
main( ) {
	int hour;
	int sec;
	cout<<" Enter the number of hours: ";
	cin>>hour;
	sec = 60*60*hour;
	cout<<hour<<" is equivalent to "<<sec<<"seconds";
	}