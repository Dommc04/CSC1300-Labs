/*Name: Dominic McElroy 
Date: 4/5/2023
purpose Hogwarts spell stuff and tingz*/

#include <iostream>
#include "Spells.h"

using namespace std;


void getInfoFromUser(string banana[], int apple[]) {
    cout << "\n Please enter the spells(s) that you have learned. ";
    for (int i = 0; i < SIZE; i++) {
        cout << "\nSPELL " << i+1 << ": ";
        cout << "\nNAME - "; getline(cin, banana[i]);
        cout << "\nEFFECT - "; cin >> apple[i];
        cin.ignore(); 
    }
}

double calculateAverage(int apple[]) {
    int total = 0;
    for (int i = 0; i < SIZE; i++) {
        total += apple[i];
    }
    return static_cast<double>(total) / SIZE;
}

int findLowest(int apple[]) {
    int low = apple[0];
    int index = 0;
    for (int i = 1; i < SIZE; i++) {
        if (apple[i] < low) {
            low = apple[i];
            index = i;
        }
    }
    return index;
}

int findHighest(int apple[]) {
    int high = apple[0];
    int index = 0;
    for (int i = 1; i < SIZE; i++) {
        if (apple[i] > high) {
            high = apple[i];
            index = i;
        }
    }
    return index;
}