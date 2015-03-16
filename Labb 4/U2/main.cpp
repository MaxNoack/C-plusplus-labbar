#include <iostream>
#include "Dog.h"
#include "Cat.h"
#include "Bird.h"
#include "Pet.h"

using namespace std;

int main() {
    cout << "A dog." << endl;
    Dog dog;
    dog.speak();
    cout << endl;
    cout << "A cat." << endl;
    Cat cat;
    cat.speak();
    cout << endl;
    cout << "A bird." << endl;
    Bird bird;
    bird.speak();
    cout << endl << endl;
    cout << "" << endl;
    Pet *animals[3];
    animals[0] = new Dog;
    animals[1] = new Cat;
    animals[2] = new Bird;
    for(int i = 0; i<3; i++) {
        animals[i]->speak();
        }
    cout << "Destroy!" << endl;
    for(int i = 0; i<3; i++) {
        animals[i]->~Pet();
}        }

