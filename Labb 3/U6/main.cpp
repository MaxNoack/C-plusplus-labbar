#include <iostream>
#include "Personnummer.h"

using namespace std;

int main() {
    Personnummer persnum;
    cout << "Ange personnummer: ";
    cin >> persnum;
    while (!persnum) {
        cerr << "Personnumret �r felaktigt!\n";
        cout << "Ange personnummer: ";
        cin >> persnum;
        }
    cout << "Personnumret " << persnum << " �r korrekt.\n";

    }
