#include<iostream>
using namespace std;
main ( ) {
	float size ;
	float cost ;
	float area ;
	float costperpound ;
	float fertpersfeet ;
	cout << "Enter the size of the fertilizer bag in pounds: " ;
	cin >> size ;
	cout << "Enter the cost of the bag: $" ;
	cin >> cost ;
	cout << "Enter the area in square feet that can be covered by the bag: " ;
	cin >> area ;
	costperpound = cost/size ;
	fertpersfeet = cost/area ;
	cout << "Cost of fertilizer per pound: $" << costperpound <<endl;
	cout << "Cost of fertilizing per square foot: $" << fertpersfeet;
	}