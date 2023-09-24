#include<iostream>
using namespace std;
main ( ) {
	float vegetablepriceperkg ;
	float fruitpriceperkg ;
	float totalkgveg ;
	float totalkgfr ;
	float earningcoins ;
	float earningrp ;
	float earningfromveg ;
	float earningfromfr ;
	float totalearning ;
	cout << "Enter vegetable price per kilogram (in coins): " ;
	cin >> vegetablepriceperkg ;
	cout << "Enter fruit price per kilogram (in coins): " ;
	cin >> fruitpriceperkg ;
	cout << "Enter total kilograms of vegetables: " ;
	cin >> totalkgveg ;
	cout << "Enter total kilograms of fruits: " ;
	cin >> totalkgfr ;
	earningfromveg = vegetablepriceperkg * totalkgveg ;
	earningfromfr = fruitpriceperkg * totalkgfr ;
	earningcoins = earningfromveg + earningfromfr ;
	earningrp = earningcoins/1.94 ;
	cout << "Total earnings in Rupees (Rps): " << earningrp ;
	}
	
	
	