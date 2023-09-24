#include<iostream>
using namespace std;
main ( ) {
	string name ;
	float adultprice ;
	float childprice ;
	float numberofAtickets ;
	float numberofCtickets ;
	float amountfromAt ;
	float amountfromCt ;
	float percentagecharity ;
	float totalamount ;
	float donation ;
	float remaining ;
	cout << "Enter the movie name: " ;
	cin >> name ;
	cout << "Enter the adult ticket price: $" ;
	cin >> adultprice ;
	cout << "Enter the child ticket price: $" ;
	cin >> childprice ;
	cout << "Enter the number of adult tickets sold: " ;
	cin >> numberofAtickets ;
	cout << "Enter the number of child tickets sold: " ;
	cin >> numberofCtickets ;
	cout << "Enter the percentage of the amount to be donated to charity: " ;
	cin >> percentagecharity ;
	amountfromAt = adultprice * numberofAtickets ;
	amountfromCt = childprice * numberofCtickets ;
	totalamount = amountfromAt + amountfromCt ;
	donation = percentagecharity/100 * totalamount ;
	remaining = totalamount - donation ;
	cout <<endl ;
	cout << "Movie: " << name << endl ;
	cout << "Total amount generated from ticket sales: $" << totalamount << endl ;
	cout << "Donation to charity (" << percentagecharity << "%): $" << donation << endl ;
	cout << "Remaining amount after donation: $" << remaining ;
	}