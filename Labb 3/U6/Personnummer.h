#ifndef PERSONNUMMER_H
#define PERSONNUMMER_H

#include <iostream>

using namespace std;

class Personnummer {
    public:
        Personnummer();
        bool operator!();
        friend ostream& operator<<(ostream& o, Personnummer& p);
        friend istream& operator>>(istream& i, Personnummer& p);
    private:
        bool check(char *str);
        char number[11];
        bool ok;
    };

#endif
