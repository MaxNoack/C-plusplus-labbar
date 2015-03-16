#ifndef KOK_H
#define KOK_H
#include "Rum.h"

class Kok : public Rum
{
public:
    Kok(int, bool, bool);
    void skriv();
    virtual ~Kok();
protected:
private:
    int Koksyta;
    bool disk, frys;
};

#endif // KOK_H
