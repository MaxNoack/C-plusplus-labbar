#pragma once
#include <ostream>
class Vektor
{
    public:
        Vektor();
        Vektor(int lng=10);
        virtual ~Vektor();
    protected:
    private:
        int *p; // Sj�lva vektorn
        int ant;// Antalet element
};

