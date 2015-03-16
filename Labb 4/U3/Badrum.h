#ifndef BADRUM_H
#define BADRUM_H
#include "Rum.h"

class Badrum : public Rum
{
public:
    Badrum(int, bool);
    void skriv();
    virtual ~Badrum();
protected:
private:
    bool dusch;
};

#endif // KOK_H
