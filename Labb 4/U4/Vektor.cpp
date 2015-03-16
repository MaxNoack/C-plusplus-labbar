#include "vektor.h"
#include <stdexcept>
using namespace std;

Vektor::Vektor(int lng) : ant(lng) {
    if(ant < 0) throw invalid_argument("lng < 0");
    p = new int[ant]; // Dynamisk allokering
}

Vektor::~Vektor() {
    delete [] p;
    }
