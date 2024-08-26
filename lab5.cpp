/*
    Title: lab5.cpp
    Author: Dominic McElroy
    Date: Feb 28 2023
    Purpose: restaurant The Cauldron printing receipts etc etc. 
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout; //file out
    int choice, pizzas, toppings, burgers, sandwiches, i, b = 0, p = 0, s = 0;
    double total, pizzacost = 20.00, toppingcost = 2.00, burgercost = 15.00, sandwhichcost = 10.00;
    //create and open restaurant.txt
    fout.open("restaurant.txt");
    //format outputs
    cout << setprecision(2) << fixed;
    fout << setprecision(2) << fixed;
    //Prompt repeated untill choice = 4
    do {
        cout << "Welcome to the Cauldron Restaurant!" << endl << "Please choose one of the following options: " << endl;
        cout << "        1 - PIZZA" << endl << "        2 - BURGER" << endl << "        3 - SANDWICH" << endl << "        4 - Done Ordering" << endl;
        cout << "CHOICE: ";
        cin >> choice;
        //Validation time!!
        while (choice < 1 || choice > 4) {
            cout << "Oops!  That is not a valid choice. Choose 1-4." << endl;
            cout << "CHOICE: ";
            cin >> choice;
        }
        //enter selected menu
        switch (choice) {
        case 1: //pizza 
            cout << "How many pizzas do you want to order? ";
            cin >> pizzas;
            //validation time!
            while (pizzas < 1) {
                cout << "Oops!  That is not a valid amount. Try again: ";
                cin >> pizzas;
            }
            // loop 
            for (i = 1; i <= pizzas; i++) {
                // pizza
                p++;
                if (p == 1) {
                    pizzacost = 20.00 * .80;
                    toppingcost = 2.00 * .80;
                    cout << "For pizza " << i << ", how many toppings? ";
                    cin >> toppings;
                    //validate
                    while (toppings < 0) {
                        cout << "Oops!  That is not a valid amount. Try again: ";
                        cin >> toppings;
                    }
                    //pizza price + add to total
                    cout << "This pizza costs $" << pizzacost + toppingcost * toppings << endl;
                    total = total + (pizzacost + toppingcost * toppings);
                }
                //other pizzas
                else {
                    pizzacost = 20.00;
                    toppingcost = 2.00;
                    cout << "For pizza " << i << ", how many toppings? ";
                    cin >> toppings;
                    //validate
                    while (toppings < 0) {
                        cout << "Oops!  That is not a valid amount. Try again: ";
                        cin >> toppings;
                    }
                    //output pizza price and add to total
                    cout << "This pizza costs $" << pizzacost + toppingcost * toppings << endl;
                    total = total + (pizzacost + toppingcost * toppings);
                }
            }
            //output to file and console
            fout << pizzas << " pizzas were added and the total is now $" << total << endl; 
            cout << pizzas << " pizzas were added and the total is now $" << total << endl << endl << endl;
            break;
        case 2: //Burber
            cout << "How many burgers do you want to order? ";
            cin >> burgers;
            //validate
            while (burgers < 1) {
                cout << "Oops!  That is not a valid amount. Try again: ";
                cin >> burgers;
            }
            //Burber cont.....
            for (i = 1; i <= burgers; i++) {
                b++;
                if (b == 1) {
                    burgercost = 15.00 * .85;
                    total = total + burgercost;
                }
                else {
                    burgercost = 15.00;
                    total = total + burgercost;
                }
            }
            //output to file and console
            fout << burgers << " burgers were added and the total is now $" << total << endl;
            cout << burgers << " burgers were added and the total is now $" << total << endl << endl << endl;
            break;
        case 3: //I am full of sandvitch
            cout << "How many sandwitches do you want to order? ";
            cin >> sandwiches;
            //validate
            while (sandwiches < 1) {
                cout << "Oops!  That is not a valid amount. Try again: ";
                cin >> sandwiches;
            }
            //detect first sandwitch
            for (i = 1; i <= sandwiches; i++) {
                s++;
                if (s == 1) {
                    sandwhichcost = 10.00 * .90;
                    total = total + sandwhichcost;
                }
                else {
                    sandwhichcost = 10.00;
                    total = total + sandwhichcost;
                }
            }
            //output to file and console
            fout << sandwiches << " sandwitches were added and the total is now $" << total << endl;
            cout << sandwiches << " sandwitches were added and the total is now $" << total << endl << endl << endl;
            break;
        default:
            //(case 4: ) output the final total and end the program  
            fout << endl << endl << "The total for your order is $" << total << endl;
            cout << endl << endl << "The total for your order is $" << total << endl;
            break;
        }
    }
    while (choice != 4);
    //close file
    fout.close();
    return(0);
}