#ifndef BIRD_H
#define BIRD_H

#include "pet.h"

class Bird : public Pet {
    public:
        Bird();
        virtual ~Bird();
        void speak();
    };

#endif // BIRD_H
