#include <iostream>
#include <stdexcept>
#include <typeinfo>
#include "Vektor.h"

using namespace std;

int main() {
    try {
        Vektor v(-2);
        }
    catch (invalid_argument& e) {
        cout << typeid(e).name() << ": " << e.what() << endl;
        }
    }
