#include<iostream>
using namespace std;
main ( ) {
	string team;
	int win;
	int lost;
	int draw;
	int points;
	cout<<"Enter the name of cricket team: ";
	cin>> team;
	cout<<"Enter the number of wins: ";
	cin>> win;
	cout<<"Enter the number of draws: ";
	cin>> draw;
	cout<<"Enter the number of losses: ";
	cin>> lost;
	points = (win*3)+(draw*1)+(lost*0);
	cout<< team<<" has obtained "<<points<<" points in the Asia Cup tournament.";
 	}
	
