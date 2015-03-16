#include "rum.h"
#include "Kok.h"
#include "Badrum.h"
#include "Vardagsrum.h"
#include "Sovrum.h"

class Bostad {
public:
    Bostad(int ytaKok, bool harDiskmaskin, bool harFrys,
           int ytaBadrum, bool harDusch,
           int ytaVardagsrum, bool harBalkong,
           int *sovRum, int *garderoberSovrum, int antalSovrum);
    ~Bostad();
    void skriv();
private:
    Kok kok;
    Badrum badrum;
    Vardagsrum vardagsrum;
    Sovrum *sovrum;
    int sovrum_antal;
};



