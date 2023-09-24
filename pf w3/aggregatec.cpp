#include<iostream>
using namespace std;
main ( ) {
	string name;
	int matric;
	int inter;
	int ecat;
	float agg;

	cout<<"enter the student's name:";
	cin>>name;
	cout<<"enter matriculation marks (out of 1100):";
	cin>>matric;
	cout<<"enter intermediate marks ( out of 550):";
	cin>>inter;
	cout<<"enter ecat marks (out of 400):";
	cin>>ecat;
	agg=((ecat/400.0 * 0.5)+(matric/1100.0 * 0.1)+(inter/550.0 * 0.4))*100;
	cout<<" Enter the student's name:"<<name<<endl;
	cout<<" Enter matriculation marks (out of 1100):"<<matric<<endl;
	cout<<" Enter intermaediate marks (out of 550):"<<inter<<endl;
	cout<<" Enter Ecat marks ( out of 400 ):"<<ecat<<endl;
	cout<<" Aggregate score for Mirza in UET is:"<<agg<<endl;
	}