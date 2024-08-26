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

void getData(string& n1, string& n2, int& a1, int& a2, string& p1, string& p2)
{
    //User Input
    cout << "\nEnter the data for the first super hero:\n";
    cout << "NAME: ";
    getline(cin, n1);
    cout << "AGE: ";
    cin >> a1;
    cout << "PET (dog/cat/rabbit/guinea pig): ";
    cin.ignore();
    getline(cin, p1);


    cout << "\nEnter the data for the second super hero:\n";
    cout << "NAME: ";
    getline(cin, n2);
    cout << "AGE: ";
    cin >> a2;
    cout << "PET (dog/cat/rabbit/guinea pig): ";
    cin.ignore();
    getline(cin, p2);
}

bool calculateResults(string name1, string name2, int age1, int age2, string pet1, string pet2)
{
    int name1b = 0;
    int name2b = 0;
    bool result;
    int result1 = 0;
    int result2 = 0;
    int result3 = 0;

    for(int i = 0; i < name1.length(); i++) 
    {
        name1b += static_cast<int>(name1.at(i));
    }

    for(int i = 0; i < name2.length(); i++) 
    {
        name2b += static_cast<int>(name2.at(i));
    }

    cout << "\n\nThe added ASCII value of " << name1 << " is " << name1b;
    cout << "\nThe added ASCII value of " << name2 << " is " << name2b;

   
    if(abs(name1b - name2b) <= 50)
    {
        result1 = true;
        cout << "\nCHECK 1 is true."; 
    }
    else
    {
        result1 = false;
        cout << "\nCHECK 1 is false."; 
    }

    if(abs(age1 - age2 <= 10))
    {
        result2 = true;
        cout << "\nCHECK 2 is true"; 
    }
    else
    {
        result2 = false;
        cout << "\nCHECK 2 is false"; 
    }

    
    if(pet1 == pet2)
    {
        result3 = true;
        cout << "\nCheck 3 is true." << endl; 
    }
    else
    {
        result3 = false;
        cout << "\nCheck 3 is false." << endl; 
    }

    //Determines if the results are going to be compatible
    if(result1 == true && result2 == true || result2 == true && result3 == true || result1 == true && result3 == true)
	{
		result = true; 
	}
	else 
	{
		result = false; 
	}

    return result; 
}