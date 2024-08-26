/*Name: Dominic McElroy 
Date: 4/5/2023
purpose Hogwarts spell stuff and tingz*/

#include <iostream>
using namespace std;
#include "Spells.h"
#include <string>

int main()
{
  cout << "\n Welcome to Hogwarts! ";
  cout << "\n This is the Hogwarts spell training and casting Program!!";

    
    string banana[SIZE];
    int apple[SIZE];
    double Average;
    int AB;
    int CD;

    
    getInfoFromUser(banana, apple);
    Average = calculateAverage(apple);
    AB = findLowest(apple);
    CD = findHighest(apple);


    cout << "---------------------------------";
    cout << "\nThe average amount of effect of all spells: " << Average;
    cout << "\nThe spell with the lowest effect is " << banana[AB] << " with value of " << apple[AB] << ".";
    cout << "\nThe spell with the most effect is " << banana[CD] << " with value of " << apple[CD] << ".";

    return 0;
}