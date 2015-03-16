#include "Kok.h"
#include "Rum.h"
#include <iostream>


Kok::Kok(int Koksyta, bool harDiskmanskin, bool harFrys) : Rum(Koksyta){
        disk = harDiskmanskin;
        frys = harFrys;
    }

void Kok::skriv(){
    cout << "Kok: " << endl;
    Rum::skriv();
    if(disk) cout << ", Diskmaskin: Ja";
    else cout << ", Diskmaskin: Nej";
    if(frys) cout << ", Frys: Ja" << endl;
    else cout << ", Frys: Nej" << endl;
}

Kok::~Kok(){

}

