/*
Title: Lab_2c.cpp
Author: Dominic McElroy
Date: Feb 6th 2023
Purpose: PS5 video game prices for three games over three months!!*/

#include <iostream>
using namespace std;

int main()
{
    int gameOne;
    int gameTwo;
    int gameThree;
    int result1;
    int result2;
    int result3;
    int result4;
    int numMonth;
    cout << "Enter the month: " << endl;
    cin >> numMonth;
    cout << "Enter the Price of game 1: "  << endl;
    cin >> gameOne;
    cout << "Enter the Price of game 2: " ;
    cin >> gameTwo;
    cout << " Enter the Price of game 3: " ;
    cin >> gameThree;
    
   
   result1 = gameOne +  gameTwo + gameThree;
   
    cout << "The cost of games for " << numMonth << " is " << "$"<< result1 << endl;

    return 0;
    }

