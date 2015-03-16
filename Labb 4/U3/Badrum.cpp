#include "Badrum.h"
#include "Rum.h"
#include <iostream>


Badrum::Badrum(int Badrumsyta, bool Dusch) : Rum(Badrumsyta){
        dusch = Dusch;
    }

void Badrum::skriv(){
    cout << "Badrum: " << endl;
    Rum::skriv();
    if(dusch) cout << ", Dusch: Ja" << endl;
    else cout << ", Dusch: Nej" << endl;
}

Badrum::~Badrum(){

}

