#include<iostream>
using namespace std;
main ( ) {
	float squarem ;
	float area ;
	float height ;
	float width ;
	int numberofwalls ;
	cout << "Number of square meters you can paint: " ;
	cin >> squarem ;
	cout << "Width of the single wall (in meters): " ;
	cin >> width ;
	cout << "Height of the single wall (in meters): " ;
	cin >> height ;
	area = height * width ;
	numberofwalls = squarem/area ;
	cout << "Number of walls you can paint: " << numberofwalls ;
	}
	 