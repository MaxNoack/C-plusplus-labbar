#ifndef DOG_H
#define DOG_H

#include "Pet.h"

class Dog : public Pet {
    public:
        Dog();
        virtual ~Dog();
        void speak();
    };

#endif // DOG_H
