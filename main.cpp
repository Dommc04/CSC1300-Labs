/*
Title: Lab10
Author: Dominic McElroy
Date: April 26th 2023
Purpose: I dont really know*/

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