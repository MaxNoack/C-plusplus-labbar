#include "Vardagsrum.h"
#include "Rum.h"

#include <iostream>


Vardagsrum::Vardagsrum(int Vardagsrumsyta, int harBalkong) : Rum(Vardagsrumsyta){
        balkong = harBalkong;
    }

void Vardagsrum::skriv(){
     cout << "Vardagsrum: " <<endl;
    Rum::skriv();
     if(balkong) cout << ", balkong: Ja" << endl;
    else cout << ", balkong: Nej" << endl;
}

Vardagsrum::~Vardagsrum(){

}

