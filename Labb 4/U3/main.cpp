#include <iostream>
#include "Bostad.h"

using namespace std;

int main() {
    int sovrumsstorlek[] = {16, 14}; // 2 sovrum
    int garderober[] = {4, 3};
    Bostad minLya(12, false, true, // kök
                  4, true, // badrum
                  24, false, // vardagsrum
                  sovrumsstorlek,
                  garderober,
                  sizeof(sovrumsstorlek)/sizeof(int));
    minLya.skriv();
    }


    /*
    Kök: Yta: 12, Diskmaskin: Nej, Frys: Ja
    Badrum: Yta: 4, Dusch: Ja
    Vardagsrum: Yta: 24, Balkong: Nej
    Sovrum: Yta: 16, 4 garderober
    Sovrum: Yta: 14, 3 garderober
    */
