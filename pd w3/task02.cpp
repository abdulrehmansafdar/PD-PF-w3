#include<iostream>
using namespace std;
main ( ) {
	int minutes ;
	int framepersecond ;
	int totalframes ;
	cout << "Number of Minutes: " ;
	cin >> minutes ;
	cout << "Frames per Second: " ;
	cin >> framepersecond ;
	totalframes = framepersecond * 60 * minutes ;
	cout << "Total Number of Frames: " << totalframes ;
	}