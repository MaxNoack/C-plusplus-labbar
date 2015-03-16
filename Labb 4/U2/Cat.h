#ifndef CAT_H
#define CAT_H

#include "pet.h"

class Cat : public Pet {
    public:
        Cat();
        virtual ~Cat();
        void speak();
    };

#endif // CAT_H
