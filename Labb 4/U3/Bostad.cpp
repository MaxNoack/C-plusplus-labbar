#include "bostad.h"


Bostad::Bostad(int ytaKok,
       bool harDiskmaskin,
       bool harFrys,
       int ytaBadrum,
       bool harDusch,
       int ytaVardagsrum,
       bool harBalkong,
       int sovRum [],
       int garderoberSovrum [],
       int antalSovrum) :
            kok(ytaKok, harDiskmaskin, harFrys), badrum(ytaBadrum, harDusch),
            vardagsrum(ytaVardagsrum, harBalkong){
        sovrum_antal = antalSovrum;
        sovrum = new Sovrum[antalSovrum+1];
    for(int i=0; i < antalSovrum; i++) {
        sovrum[i] = Sovrum(sovRum[i], garderoberSovrum[i]);
    }
}

void Bostad::skriv() {
    kok.skriv();
    badrum.skriv();
    vardagsrum.skriv();
    for(int i = 0; i < sovrum_antal; i++) {
        sovrum[i].skriv();
    }
}

Bostad::~Bostad() {
    delete[] sovrum;
    sovrum = NULL;
}
