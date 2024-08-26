/*
Title: Lab_2b.cpp
Author: Dominic McElroy
Date: Feb 6th 2023
Purpose: Puppy Food Cost Calculator!!*/

#include <iostream>
using namespace std;

int main()
{
    int numPuppies;
    int numfood;
    int result1;
    int result2;
    cout << "Enter the number of puppies! ";
    cin >> numPuppies;
   result1 = numfood = numPuppies * 2;
   result2 = numPuppies + numfood *20.5;
    cout << "The amount of pet food per day is: " << result1 << " cups"<< endl;
    cout<<"The total cost of pet food per week is: " << "$" <<result2; 
    return 0;
    }