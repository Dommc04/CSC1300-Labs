/*
Title: Lab1.cpp
Author: Dominic McElroy
Date: January 26 2023
Purpose: Convert Celsius to Fahrenheit*/

#include <iostream>
using namespace std;

int main()
{
    double fahrenheit, celsius;
    cout << "\n\nWhat is the temperature in Celsius? ";
    cin >> celsius;
    fahrenheit = celsius * (9.0/5.0) + 32;
    cout << "\nRESULT:  " << celsius << " degrees Celcius is ";
    cout << fahrenheit << " degrees Fahrenheit.\n";
    return 0;
    }