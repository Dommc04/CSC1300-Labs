/* Lab 4
Name: Dominic McElroy 
Date: 2/20/2023
Purpose: Input validation using loops*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
int screentime;
int studytime;
int main() {
    cout << "What is your average daily screen time in hours? " << endl;
     cin >> screentime;
     while (screentime < 0 || screentime > 24) {
    cout << "please input a valid number ";
    cin >> screentime;
     }
    cout << "what is your daily average study time? ";
    cin >> studytime;
      while (studytime < 0 || studytime > 24) {
    cout << "please input a valid number ";
    cin >> studytime;
}
if (screentime <= 2 || studytime < 2){
    cout << "You may want to study more if you wish to learn anything. " << endl;
}
else if (screentime <= 2 || studytime >= 6){
    cout << "You need to socialize with people more often. " << endl;
}

else if (screentime > 2 || studytime >= 6){
    cout << "You need to socialize with people more often and get off that phone. " << endl;
}
    else if (screentime > 2 || studytime < 6) {
        cout << "What are you going to do if you lose that phone? it is interfering with your ability to have a real life. ";
    }
}