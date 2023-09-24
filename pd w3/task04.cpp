#include<iostream>
using namespace std;
main ( ) {
	float imposter ;
	float playercount ;
	int chance ;
	cout << "Enter Imposter Count: " ;
	cin >> imposter ;
	cout << "Enter Player Count: " ;
	cin >> playercount ;
	chance = (imposter/playercount) * 100 ;
	cout << "Chance of being an imposter: "<< chance << "%" ;
	}
	