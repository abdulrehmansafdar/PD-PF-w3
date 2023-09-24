#include <iostream>
using namespace std;
main ( ) {
	int vol;
	float curr;
	int power;
	cout<<" Enter voltage (in volts): ";
	cin>>vol;
	cout<<" Enter current (in amperes): ";
	cin>>curr;
	power = vol*curr;
	cout<<" The power is "<<power<<" watts.";
	}