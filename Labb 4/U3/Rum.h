#ifndef RUM_H
#define RUM_H
#include <iostream>
using namespace std;

class Rum
{
public:
    Rum(int y);
    virtual ~Rum();
    virtual void skriv() const
    {
        cout << "Yta: " << yta;
    }
private:
    int yta;
};


#endif // RUM_H
