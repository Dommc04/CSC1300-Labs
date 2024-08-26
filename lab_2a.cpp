/*
Title: Lab_2a.cpp
Author: Dominic McElroy
Date: Feb 6th 2023
Purpose: Nematode storage*/

#include <iostream>
using namespace std;

int main()
{
    int numTodes;
    int numHouses;
    int result;
    cout << "Enter the number of Nematodes tamed! ";
    cin >> numTodes;
    numHouses = 5;
    result = numTodes / numHouses;
    cout << "The number of nematodes assigned to each house is:" << result ;
    return 0;
    }