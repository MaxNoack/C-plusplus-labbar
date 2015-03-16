#include "Sovrum.h"
#include "Rum.h"
#include <iostream>


Sovrum::Sovrum(int Sovrumsyta, int garderober) : Rum(Sovrumsyta){
        gard = garderober;
    }

Sovrum::Sovrum() : Rum(0){
    gard = 0;
}

void Sovrum::skriv(){
    cout << "Sovrum: " << endl;
    Rum::skriv();
    cout << ", Antal garderober: " << gard << endl;
}

Sovrum::~Sovrum(){

}

