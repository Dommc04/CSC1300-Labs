/*
    Title: Monster stuff n things 
    Author: Dominic Mcelroy 
    Date: 3/10/ 2023
    Purpose: Create monsters with hit points and have two characters fight each other. 
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
using namespace std;

fstream file;
string printline, e1 , e2, g1, g2;
int health1, health2, hpoints1, hpoints2;

void PrintWin();
void PrintBilbo();
void PrintGlorp();
void PrintSlagjaw();
void Fight(string, string);

int main()
{
    cout << "Bilbo = monster1.txt || Glorp = monster2.txt || Slagjaw = monster3.txt" << endl;
    cout << "Enter the first monster you'd like to use: ";
    getline(cin, e1);
    cout << "Enter the monster you'd like to pit against the first one: ";
    getline(cin, e2);
    Fight(e1, e2);
    
    return(0);
}

void PrintBilbo() {
    file.open("monster1.txt");
    while (file.is_open() && file.good() && !file.eof()) {
        file.ignore();
        getline(file, printline);
        cout << printline << endl;
    }
    file.close();
}
void PrintGlorp() {
    file.open("monster2.txt");
    while (file.is_open() && file.good() && !file.eof()) {
        file.ignore();
        getline(file, printline);
        cout << printline << endl;
    }
    file.close();
}
void PrintSlagjaw() {
    file.open("monster3.txt");
    while (file.is_open() && file.good() && !file.eof()) {
        file.ignore();
        getline(file, printline);
        cout << printline << endl;
    }
    file.close();
}
void PrintWin() {
    cout << "   '##:::::'##:'####:'##::: ##:'##::: ##:'########:'########::" << endl
         << "    ##:'##: ##:. ##:: ###:: ##: ###:: ##: ##.....:: ##.... ##:" << endl
         << "    ##: ##: ##:: ##:: ####: ##: ####: ##: ##::::::: ##:::: ##:" << endl
         << "    ##: ##: ##:: ##:: ## ## ##: ## ## ##: ######::: ########::" << endl
         << "    ##: ##: ##:: ##:: ##. ####: ##. ####: ##...:::: ##.. ##:::" << endl
         << "    ##: ##: ##:: ##:: ##:. ###: ##:. ###: ##::::::: ##::. ##::" << endl
         << "   . ###. ###::'####: ##::. ##: ##::. ##: ########: ##:::. ##:" << endl
         << "   :...::...:::....::..::::..::..::::..::........::..:::::..::" << endl;
}
void Fight(string file1, string file2) {
    cout << endl << endl;
    file.open(file1);
    file >> health1;
    file.ignore();
    file >> hpoints1;
    file.ignore();
    getline(file, g1);
    file.close();
    file.open(file2);
    file >> health2;
    file.ignore();
    file >> hpoints2;
    file.ignore();
    getline(file, g2);
    file.close();
    cout << "Health of " << g1 << ": " << health1 << endl;
    cout << "Health of " << g2 << ": " << health2 << endl << endl;
    cout << "Hitpoints of " << g1 << ": " << hpoints1 << endl;
    cout << "Hitpoints of " << g2 << ": " << hpoints2 << endl << endl;
    

}