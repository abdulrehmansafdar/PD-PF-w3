#include<iostream>
using namespace std;
main ( ) {
	int num ;
	int sum ;
	int mod1 ;
	int mod2 ;
	int mod3 ;
	int mod4 ;
	cout << "Enter a 4-digit number: " ;
	cin >> num ;
	mod1 = num % 10 ;
	num = num / 10 ;
	mod2 = num % 10 ;
	num = num / 10 ;
	mod3 = num % 10 ;
	num = num / 10 ;
	mod4 = num % 10 ;
	num = num / 10 ;
	sum = mod1 + mod2 + mod3 + mod4 ;
	cout << "Sum of the individual digits: " << sum ;
	}