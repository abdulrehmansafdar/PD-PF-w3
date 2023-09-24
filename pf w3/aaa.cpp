#include <iostream>
using namespace std;
main ( ) {
	int workingdays;
	int dailyearninginusd;
	int exchangerate;
	float salarypermonth;
	float salaryperyear;
	float salaryafterbonus;
	float saftertax;
	float sinPKR;
	float averagesalary;
	cout<<"Enter the working days per month: ";
	cin>> workingdays;
	cout<<"Enter the daily earning in Dollars: ";
	cin>> dailyearninginusd;
	cout<<"Exchange rate from USD to PKR: ";
	cin>> exchangerate;
	salarypermonth = workingdays * dailyearninginusd;
	salaryperyear = salarypermonth * 12;
	salaryafterbonus = salaryperyear + (salarypermonth*2.5);
	saftertax = salaryafterbonus - (25/100 * salaryperyear);
	sinPKR = saftertax * exchangerate;
	averagesalary = sinPKR/365;
	cout<<"His average salary is in PKR is: "<<averagesalary;
	}

