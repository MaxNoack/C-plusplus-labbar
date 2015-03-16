#ifndef SOVRUM_H
#define SOVRUM_H
#include "Rum.h"

class Sovrum : public Rum
{
public:
    Sovrum(int, int);
    Sovrum();
    void skriv();
    virtual ~Sovrum();
protected:
private:
    int Sovrumsyta;
    int gard;
};

#endif // SOVRUM_H
