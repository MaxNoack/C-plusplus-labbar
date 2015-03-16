#ifndef VARDAGSRUM_H
#define VARDAGSRUM_H
#include "Rum.h"

class Vardagsrum : public Rum
{
public:
    Vardagsrum(int, int);
    void skriv();
    virtual ~Vardagsrum();
protected:
private:
    bool balkong;
};

#endif // KOK_H
