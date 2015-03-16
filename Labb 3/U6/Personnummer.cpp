#include "personnummer.h"
#include <iostream>
#include <cstring>

using namespace std;

Personnummer::Personnummer() : ok(false) {
    strcpy(number, "0000000000");
    }

bool Personnummer::operator !() {
    return !ok;
    }

bool Personnummer::check(char *input) {

    if(strlen(input) != 10) {
        cout << "Has to be 10 digits long.\n";
        return false;
        }

    for(int i = 0; i < 10; i++) {
        if(!isdigit(input[i])) {
            cout << "Can only contain numbers(0-9).\n";
            return false;
            }
        }

    int sums[9];
    cout << endl << "Original" << " \t" << "Altered" << endl;
    for(int i = 0; i < 9; i++) {
        if(i % 2 == 0) {
            sums[i] = (input[i] - '0') * 2;
            }
        else {
            sums[i] = (input[i] - '0');
            }
            cout << input[i] << "\t\t" << sums[i] << endl;
        }

    int total = 0;
    for(int i = 0; i < 9; i++) {
        if(sums[i] > 9) {
            total += ((sums[i] / 10) + (sums[i] % 10));
            }
        else {
            total += sums[i];
            }
        }
        cout << "total is: " << total << endl;

    if((10 - (total % 10)) == 10 && (input[9] - '0') == 0) return true;
    if((10 - (total % 10)) != (input[9] - '0')) {
        cout << "Last digit don't match.\n";
        return false;
        }
    return true;
    }

ostream& operator<<(ostream& o, Personnummer& p) {
    o << p.number;
    return o;
    }

istream& operator>>(istream& i, Personnummer& p) {
    char temp[11];
    i >> temp;
    if(p.check(temp)) {
        strcpy(p.number, temp);
        p.ok = true;
        }
    return i;
    }
