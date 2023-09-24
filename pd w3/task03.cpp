#include<iostream>
using namespace std;
main ( ) {
	float initialvelocity ;
	float finalvelocity ;
	float time ;
	float acceleration ;
	cout << "Enter Initial Velocity (m/s): " ;
	cin >> initialvelocity ;
	cout << "Enter Acceleration (m/s^2): " ;
	cin >> acceleration ;
	cout << "Enter Time (s): " ;
	cin >> time ;
	finalvelocity =  initialvelocity + (acceleration * time) ;
	cout << "Final Velocity (m/s): " << finalvelocity ;
	}