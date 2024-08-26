/* Job Forecast Program 
Name: Dominic McElroy 
Date: 2/16/2023
Purpose: Predict future and job income and path*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    //list of all variables
    int choice;
    int randstuff;
    double money;
    string liked;
    string Liked2;
    string hated;
    string car;
    string car2;
    string carhated;
    string areaofwork;
    string cars;
    string lineofstars (79, '*');
    //ADDING THE RANDOM NUMBER
    srand(time(0));
    cout << setprecision(2) << fixed << lineofstars << endl ;
    cout << "JOB FORECAST" << endl;
    cout << lineofstars << endl;
    cout << "Enter in the information requested below and I will determine the job you will\nget, how many years you will work there, your salary, and the company car you \nwill drive." <<endl << endl;
    // every input for the said info
    cout << "Company you like: ";
    getline (cin, liked);
    cout << " Another Company you like: ";
    getline (cin, Liked2);
    cout << "Company you hate: ";
    getline (cin, hated);
    cout << "vehicle you like: ";
    getline (cin, car);
    cout << "Another vehicle you like: ";
    getline (cin, car2);
    cout << "vehicle you hate: ";
    getline (cin, carhated);
    cout << endl;
    cout << "pick an integer between 1 to 25 (inclusively): ";
    cin >> randstuff;
    cout << endl;
    //MATH - SALARY CALC
    money = (randstuff) * (10000) * ((rand() % 10) +1);

    if (randstuff >= 20){
        choice = 1;
    }
else if (randstuff > 7 && randstuff < 20){
    choice =2;
}
else {
        choice = 3;
    }
    cout << lineofstars << endl;
    cout << endl;

    //the results 

    switch (choice) {
        case 1:
        cout << "You will work at " << liked << " for " << (rand() % 100) + 1 << " years making $" << money << " per year" << endl;
        cout << "and driving a red " << car << " on business trips." << endl;
        break;
          case 2:
        cout << "You will work at " << Liked2<< " for " << (rand() % 100) + 1 << " years making $" << money << " per year" << endl;
        cout << "and driving a royal blue " << car2 << " on business trips." << endl;
        break;
          case 3:
        cout << "You will work at " << hated<< " for " << (rand() % 100) + 1 << " years making $" << money << " per year" << endl;
        cout << "and driving a red " << carhated << " on business trips." << endl;
        break;
    }
            cout << endl;
            cout << lineofstars << endl << endl;
            return 0;
    }

