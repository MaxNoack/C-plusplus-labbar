#include "Kvadrat.h"


/**
 * - Datamedlem: kvadratens sida (heltal).
 * - Konstruktorer: Standardkonstruktor, en konstruktor med kvadratens sida som argument,
 *   kopieringskonstruktor (om sådan behövs, om inte motivera!).
 * - Medlemsfunktion som returnerar kvadratens area.
 */

Kvadrat::Kvadrat() {
    side = 4;
    }

Kvadrat::Kvadrat(int s) {
    side = s;
    }

Kvadrat::Kvadrat(const Kvadrat& k) {
    side = k.side;
    }

int Kvadrat::getArea() {
    return side * side;
    }

void Kvadrat::operator++() {
    side++;
    }

void Kvadrat::operator--() {
    if(side>0) side--;
    }

void Kvadrat::operator+(int t) {
    side = side+t;
    }

void Kvadrat::operator-(int s) {
    if(side-s>=0)side = side-s;
    }

bool operator == (const Kvadrat& l) {
    if(side == l.side) return true;
    else return false;
    }

bool operator > (const Kvadrat& k, const Kvadrat& l) {
    if(k.side > l.side) return true;
    else return false;
    }

bool operator < (const Kvadrat& k, const Kvadrat& l) {
    if(k.side < l.side) return true;
    else return false;
    }


