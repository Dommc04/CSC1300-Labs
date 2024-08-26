/* 
    Title: lab9.cpp
    Name: Dominic McElroy 
    Date: February 4/19/23
    Purpose: Ghost Busterz

*/
#include <iostream>
#include <string>

using namespace std;

void getParanormalData(int ghostybusters, int* evps, string* employees, string* whoyougonnacall)
 {
    for (int i = 0; i < ghostybusters; i++) {
        cout << "Enter the name of investigator " << i+1 << ": ";
        cin >> *(employees+i); 
        cout << "Enter the date of investigation for investigator " << i+1 << " (mm/dd/yyyy): ";
        cin >> *(whoyougonnacall+i); 
        cout << "Enter the number of EVPs recorded by investigator " << i+1 << ": ";
        cin >> *(evps+i); 
        // Ghosssssst Busterrrrssss Crewwwww 
    }
}

void getStats(int ghostybusters, int* evps, int* total, double* average, int* highestEmployee)
 {
    *total = 0;
    *highestEmployee = 0;
    for (int i = 0; i < ghostybusters; i++) { 
        *total += *(evps+i);
        if (*(evps+i) > *(evps+*highestEmployee)) {
            *highestEmployee = i;
        }
    }
    *average = (double)*total / ghostybusters;
}

//Loop de loop *^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

int main() {
    char location[100]; 
    int ghostybusters;                                                                                                                                                                
    int totalGhosties;
    double averageGhosties;
    int highestEmployee;
    int* evps;
    string* employees;
    string* whoyougonnacall;


    // user input time (super epic)
    cout << "Hello! What haunted location is investigated: ";
    cin.getline(location, 100);

    cout << "Enter the number of investigators (1-25): ";
    cin >> ghostybusters;

    while (ghostybusters< 1 || ghostybusters > 25) {
        cout << "Oops! you must enter 1 through 25. ";
        cin >> ghostybusters;
    }

    evps = new int[ghostybusters]; 
    employees = new string[ghostybusters]; // their 
    whoyougonnacall = new string[ghostybusters];
    //The calling of the functions 
    getParanormalData(ghostybusters, evps, employees, whoyougonnacall);  
    getStats(ghostybusters, evps, &totalGhosties, &averageGhosties, &highestEmployee); 

    cout << "\nLocation: " << location << endl;
    cout << "Number of investigators: " << ghostybusters<< endl;
    cout << "Investigator Names: ";
    for (int i = 0; i < ghostybusters; i++) {
        cout << *(employees+i) << ", ";
    }
    cout << endl;
    cout << "Investigation Dates: ";
    for (int i = 0; i < ghostybusters; i++) {
        cout << *(whoyougonnacall+i) << ", ";
    }
    cout << endl;
    cout << "Number of EVPs recorded: ";
    for (int i = 0; i < ghostybusters; i++) {
        cout << *(evps+i) << ", ";
    }
    cout << endl;
    cout << "Total amount of evps recorded: " << totalGhosties << endl;
    cout << "Average amount of evps recorded: " << averageGhosties << endl;
    cout << "Investigator who recorded the most! " << *(employees+highestEmployee) << endl;
    //Flushing the arrays 
    delete[] evps;
    delete[] employees; 
    delete[] whoyougonnacall; 

    return 0;}