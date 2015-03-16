#ifndef KUND_H
#define KUND_H

#include <cstdlib>

class Kund {
     private:
        int atid; // ankomsttid
        int btid; // betjäningstid
    public:
        Kund(int arrival) : atid(arrival) {
            btid = (rand() % 4) + 1;
            }
        int ankomst() {
            return atid;
            }
        int betjaning() {
            return btid;
            }
    };

#endif // KUND_H
