#include<iostream>
using namespace std;
main ( ){
	int population;
	int birthrate;
	int finalpopulation;
	cout<<"Enter the current world population: ";
	cin>> population;
	cout<<"Enter the monthly birth rate (number of births per months): ";
	cin>> birthrate;
	finalpopulation = population + birthrate*12*30;
	cout<<"The population in three decades will be: "<<finalpopulation;
	}
	