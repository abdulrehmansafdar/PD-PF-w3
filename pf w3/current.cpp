#include<iostream>
using namespace std;
main ( ) {
	int charge;
	float time;
	float current;
	cout<<"enter the charge(Q) in coulombs:";
	cin>> charge;
	cout<<"enter the time (t) in seconds:";
	cin>> time;
	current = charge/time;
	cout<<"the current (I) is:"<<current;
	}