#include <iostream>
#include <cstdlib>
#include "Numbers.h"
#include <time.h>
using namespace std;

//Skriv ett program som framslumpar positiva heltal (0-9999)
//och insätter dessa först i en enkellänkad lista. Skriv ut
//listan och bestäm största talet (låt funktioner utföra jobbet).

// Lägg in sist i lista mha rekursion
void addFirst(Numbers *& forsta, int d) {
    forsta = new Numbers(forsta, d);
    }

int main() {
    int amountNumbers;
    cout << "How many numbers do you want to create?" << endl;
    cin >> amountNumbers;
    int number = 0;

    Numbers *forsta = nullptr;
    int random = 0;
    srand(time(NULL));
    for(int i=0; i<amountNumbers; i++) {
        random = rand() % 9999;
        cout << "Slumpat tal: " << random << endl;
        forsta = new Numbers(forsta, random); // 1:a element
        addFirst(forsta, random);
        }

    //Skriv ut
    int biggest = forsta->data;
    cout << "position\t" << "value" << endl;
    for(int i=0; i<amountNumbers; i++) {

        if(forsta->data > biggest) biggest = forsta->data;

        cout << i << "\t\t" << forsta->data << endl;
        forsta = forsta->nasta;
        }

    cout << endl << "Biggest number is: " << biggest << endl;
    }


