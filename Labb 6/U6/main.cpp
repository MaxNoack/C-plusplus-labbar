#include <iostream>
#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "../U5/Queue.h"

using namespace std;

struct Kund {
    char namn[35];
    double belopp;
    };


void kundQueue(Queue<Kund> *q);


void kundQueue(Queue<Kund> *q) {
    Kund k;
    cout << "Ange kundens namn: ";
    cin >> k.namn;
    cout << "Ange kundens betalningsbelopp: ";
    cin >> k.belopp;
    try {
        q->enqueue(k);
        }
    catch (length_error) {
        cout << "Kön är full. Kunden lades inte till." << endl;
        }
    }


int main() {

    int servedCustomers = 0;
    double total = 0;
    Queue<Kund> q(5);

    while(true) {
        cout << endl;
        cout << "Length of queue: " << q.length() << "   Handled customer: " << servedCustomers << "   Total selling: " << total << endl;
        cout << "1. Queue new customer." << endl << "2. Handle customer." << endl << "3. Quit." << endl << "Val (1-3): ";
        int choice;
        cin >> choice;

        switch(choice) {
            case 1:
                kundQueue(&q);
                break;
            case 2:
                try {
                    Kund k = q.dequeue();
                    servedCustomers++;
                    total += k.belopp;
                    cout << "Handled customer: " << k.namn << endl;
                    cout << "Queue size: " << q.length() << endl;
                    }
                catch (length_error) {
                    cout << "Queue is empty" << endl;
                    }
                break;
            case 3:
                return 0;
            }
        }

    return 0;
    }

