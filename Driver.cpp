/*
Title: lab7.cpp
Author: Dominic McElroy
Date: March 23 2023
Purpose: Superhero roomate
*/

#include <iostream>
#include <iomanip>
using namespace std; 

#include "lab7.h" //Header file

//Main function
int main()
{
	//Variables 
    string n1, n2, p1, p2;
	int a1, a2;
	bool compatibility;
	
    cout << "Super Hero Roommate Compatibility Check" << endl;

	getData(n1, n2, a1, a2, p1, p2); 

	compatibility = calculateResults(n1, n2, a1, a2, p1, p2); 

	cout << "\n** RESULTS **\n";

	if(compatibility == true)
	{
		cout << n1 << " and " << n2 << " are compatible to be roommates!"; 
	}
	else
	{
		cout << n1 << " and " << n2 << " are not compatible to be roommates."; 
	}

    return 0;
}